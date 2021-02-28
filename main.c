#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long

#define si(a) scanf("%lld",&a)
#define pi(a) printf("%lld",a)
#define pis(a) printf("%lld ",a)
#define nln printf("\n")

#define chmax(a,b) if ( a < b ) a = b

void prepare_lookup_table ()
{
}

void do_task ()
{
	ll mx = INT_MIN, count = 1;
	char c, pv = '.';
	while ( scanf("%c",&c) != EOF ) {
		if ( c != pv ) {
			pv = c;
			chmax ( mx, count );
			count = 1;
		} else {
			count++;
		}
	}
	if ( mx > 6 ) puts("YES");
	else puts("NO");
}

int main ()
{
	prepare_lookup_table();

	ll t = 1;
//	si(t);
	while ( t-- ) {
		do_task();
	}


	return 0;
}
