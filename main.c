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

#define mx 10000005
bool A[mx] = { };
void prepare_lookup_table ()
{
	A[0] = A[1] = true;
	int sq = (int)sqrt(mx); sq++;
	for ( int i = 2 ; i < sq ; i++ ) {
		if ( !A[i] ) {
		       for ( int j = i*i ; j < mx ; j+=i ) {
			       A[j] = true;
		       }
		}
	}
}

void print_n_primes ( ll n )
{
	ll i = 1;
	while ( n-- ) {
		while ( A[i] ) {
			i++;
		}
		pis(i); i++;
	}
}

void do_task ()
{
	printf("Enter a positive integer : ");
	ll n; si(n);
	if ( n < 1 ) {
		puts("Invalid input.");
		return;
	}
	if ( n > 664579 ) {
		puts("Input is too high.");
		return;
	}
	print_n_primes ( n );
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
