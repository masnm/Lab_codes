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

void initilize ( int* arr, int n )
{
	for ( int i = 0 ; i < n ; i++ ) {
		arr[i] = rand() % 101;
	}
}

void summation_using_a_pointer ( int* arr, int n, int* sum )
{
	for ( int i = 0 ; i < n ; i++ ) {
		*sum += arr[i];
	}
}

int main ()
{
	int n;
	printf("Enter a positive number : ");
	si(n);

	int* arr = (int*) malloc(n*sizeof(int));

	initilize ( arr, n );

	int sum = 0;
	summation_using_a_pointer ( arr, n, &sum );

	puts("The elements are: ");
	for ( int i = 0 ; i < n ; i++ ) {
		pis(arr[i]);
	}
	nln;

	printf("The summation of the element in the array is: %d\n",sum);

	free ( arr );


	return 0;
}
