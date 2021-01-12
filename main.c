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
ll A[20000005];
ll B[20000005];

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
	ll n,m; sl(n); sl(m);
	for ( ll i = 0 ; i < m ; i++ ) sl(A[i]);
	ll dp[1000][1000] = { };
	for ( ll i = 0 ; i < m ; i++ ) dp[0][i] = 1;
	for ( ll i = 0 ; i < n+1 ; i++ ) {
		for ( ll j = 0 ; j < m ; j++ ) {
			for ( ll k = j ; k < m ; k++ ) {
				if ( i + A[k] < n + 1 ) {
					dp[i+A[k]][k] += dp[i][j];
				}
			}
		}
	}
	for ( ll i = n ; i < n+1 ; i++ ) {
		for ( ll j = 0 ; j < m ; j++ ) {
			pl(dp[i][j]);
		}
		nln;
	}
}

int main ()
{
	prepare_lookup_table();

	ll t = 1;
	//sl(t);
	while ( t-- ) {
		do_task();
	}


	return 0;
}
