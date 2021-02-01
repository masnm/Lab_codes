#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define chmax(a,b) if ( a < b ) a = b
#define chmin(a,b) if ( a > b ) a = b

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

int main ()
{


	return 0;
}
