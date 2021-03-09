#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long

#define si(a) scanf("%d",&a)
#define pi(a) printf("%d",a)
#define pis(a) printf("%d ",a)
#define nln printf("\n")

int fib_s[1001];
int si,ei;
void prepare_lookup_table ()
{
	fib_s[0] = fib_s[1] = 1;
	for ( int i = 2 ; fib_s[i-1]<1000 ; ++i ) {
		fib_s[i] = fib_s[i-1] + fib_s[i-2];
		if ( fib_s[i] < 100 ) ei = i;
		if ( fib_s[i] < 1000 ) si = i;
	}
}

void do_task ()
{
	for ( int i = si ; i >= ei ; --i ) {
		pis(fib_s[i]);
	}
	nln;
}

int main ()
{
	prepare_lookup_table ();

	do_task ();


	return 0;
}
