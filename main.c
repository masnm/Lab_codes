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

#define max 10000
bool A[max] = { };
void prepare_table ( void )
{
	A[0] = A[1] = true;
	for ( int i = 2 ; i < max ; i++ ) {
		if ( !A[i] ) {
			for ( int j = i*2 ; j <= sqrt(max) ; j += i ) {
				A[j] = true;
			}
		}
	}
}

void print_primes ( int n )
{
	puts("The prime numbers are ");
	for ( int i = 0 ; i < n ; i++ ) {
		if ( !A[i] ) printf("%d ",i );
	}
}

void print_n_primes ( int n )
{
	printf("The list of first %d prime numbers are :\n",n);
	int count = 1, index = 0;
	while ( count <= n ) {
		if ( !A[index++] ) {
			count++;
			printf("%d ",index-1);
		}
	}
}


int main ()
{
	prepare_table ();

	int input;
	printf("Enter the number : ");
	scanf("%d",&input);

	print_primes ( input );
	nln;


	print_n_primes ( input );
	nln;



	return 0;
}
