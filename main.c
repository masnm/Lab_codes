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

void prepare_lookup_table ()
{
}

void do_task ()
{
	ll n; si(n);
	char s[50];
	ll ans = 0;
	while ( n-- ) {
		scanf("%s",s);
		if ( s[0] == 'T' ) ans += 4;
		else if ( s[0] == 'C' ) ans += 6;
		else if ( s[0] == 'O' ) ans += 8;
		else if ( s[0] == 'D' ) ans += 12;
		else ans += 20;
	}
	pis(ans);
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
