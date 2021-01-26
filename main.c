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

int find_fib_sum ( int n )
{
	int sum = 0, first = 1, second = 1, next;
	while ( first <= n ) {
		printf ( "%d ", first );
		sum += first;
		next = first + second;
		first = second;
		second = next;
	}
	return sum;
}

int main ()
{
	int input;
	printf("Enter the number : ");
	scanf("%d",&input);

	int sum = find_fib_sum ( input );

	printf( "The sum is %d",sum );


	return 0;
}
