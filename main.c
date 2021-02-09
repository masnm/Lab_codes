#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long

#define si(a) scanf("%lld",&a)
#define pi(a) printf("%lld",a)
#define pis(a) printf("%lld",a)
#define nln printf("\n")

void do_task ()
{
	ll n=0;
	si(n);
	ll t=0;
	while ( n-- ) {
		si(t);
		if ( t == 1 ) {
			puts("HARD");
			return;
		}
	}
	puts("EASY");
}

int main ()
{
	ll t = 1;
	while ( t-- ) {
		do_task();
	}


	return 0;
}
