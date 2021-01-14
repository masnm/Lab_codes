#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long int

#define sl(a) scanf("%lld",&a)
#define pl(a) printf("%lld ",a)
#define nln printf("\n")

const unsigned long long int UINF = ULLONG_MAX;
const long long int INF = LLONG_MAX;
const long long int mod = 1000000007;

#warning need array limit
ll A[10000005];
ll B[10000005];

int min ( const void *a, const void *b )
{
	ll l = *(ll*)a, r = *(ll*)b;
	if ( l < r ) return -1;
	if ( l > r ) return 1;
	return 0;
} // void qsort ( void *ptr, size_t count, size_t size, int (*comp)(const void *, const void *) );

void prepare_lookup_table ()
{
}

void do_task ()
{
}

int main ()
{
	prepare_lookup_table();

	ll t = 1;
	sl(t);
	while ( t-- ) {
		do_task();
	}


	return 0;
}
