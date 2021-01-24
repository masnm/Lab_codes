#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define si(a) scanf("%d",&a)
#define pis(a) printf("%d ",a)
#define pi(a) printf("%d",a)
#define nln printf("\n")

int min ( const void *a, const void *b ) {
	int l = *(int*)a, r = *(int*)b;
	if ( l < r ) return -1;
	if ( l > r ) return 1;
	return 0;
} // void qsort ( void *ptr, size_t count, size_t size, int (*comp)(const void *, const void *) );

void chmin ( int *a, int b ) { *a > b ? *a = b : false; }
void chmax ( int *a, int b ) { *a < b ? *a = b : false; }

typedef struct {
	int min;
	int max;
	int s;
} st ;

int main ()
{
	int t,sum,l,r,ans; si(t);
	char c[100005];
	while ( t-- ) {
		int n, m; si(n); si(m);
		scanf("%s",c);
		while ( m-- ) {
			si(l); si(r);
			int low = 0;
			int high = 0;
			sum = 0;
			for ( int i = 0 ; i < l-1 ; i++ ) {
				if ( c[i] == '-' ) sum--;
				else sum++;
				chmin ( &low, sum );
				chmax ( &high, sum );
			}
			for ( int i = r ; i < n ; i++ ) {
				if ( c[i] == '-' ) sum--;
				else sum++;
				chmin ( &low, sum );
				chmax ( &high, sum );
			}
			ans = abs(low) + high + 1;
			pi(ans); nln;
		}
	}


	return 0;
}
