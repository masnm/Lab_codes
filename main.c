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

ll gcd (int n, int m)
{
	if (m == 0)
		return n;
	else
		return gcd (m, n % m);
}

void do_task ()
{
	printf("Enter two number : ");
	ll n, m; si(n); si(m);
	ll ans = gcd ( n, m );
	printf("GCD of the numbers are : ");
	pis(ans);
	nln;
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
