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
		arr[i] = rand() % 1000;
	}
}

void devide ( int* arr, int n, int* odd, int* even, int* oc, int* ec )
{
	for ( int i = 0 ; i < n ; i++ ) {
		if ( arr[i] % 2 == 0 ) {
			even[*ec] = arr[i];
			*ec = *ec + 1;
		} else {
			odd[*oc] = arr[i];
			*oc = *oc + 1;
		}
	}
}

void swap ( int* a, int* b )
{
	int temp = *a ; *a = *b ; *b = temp;
}

void sort ( int* arr, int n )
{
	for ( int i = 0 ; i < n-1 ; i++ ) {
		for ( int j = i+1 ; j < n ; j++ ) {
			if ( arr[i] > arr[j] ) {
				swap ( arr+i, arr+j );
			}
		}
	}
}

int main ()
{
	int n;
	printf("Enter the number of element you want : ");
	si(n);

	int* arr = (int*) malloc(2*n*sizeof(int));

	initilize ( arr, n*2 );

	int* odd = (int*) malloc(2*n*sizeof(int));
	int* even = (int*) malloc(2*n*sizeof(int));
	int odd_count = 0, even_count = 0;

	devide ( arr, n*2, odd, even, &odd_count, &even_count );

	sort ( odd, odd_count );
	sort ( even, even_count );

	puts("The odd elements after swaping is ");
	for ( int i = 0 ; i < odd_count ; i++ ) {
		pis(odd[i]);
	}
	nln;

	puts("The even elements after swaping is ");
	for ( int i = 0 ; i < even_count ; i++ ) {
		pis(even[i]);
	}
	nln;


	free ( arr );
	free ( odd );
	free ( even );


	return 0;
}
