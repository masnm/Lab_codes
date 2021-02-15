#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long
#define ld long double

#define si(a) scanf("%d",&a)
#define pi(a) printf("%d",a)
#define pis(a) printf("%d ",a)
#define nln printf("\n")

bool is_valid ( int a, int b )
{
	if ( a < 1 || b < 1 ) {
		printf("Input is invalid.\ninput must contain positive numbers only.\nTry again : ");
		return false;
	}
	return true;
}

int main ()
{
	int r,c;
	printf("Enter the number of rows : "); si(r);
	printf("Enter the number of columns : "); si(c);
	while ( !is_valid ( r, c ) ) {
		printf("Enter the number of rows : "); si(r);
		printf("Enter the number of columns : "); si(c);
	}
	
	// declearin the array
	int arr[r][c];
	
	// initializing the array with random number in range 0-6
	for ( int i = 0 ; i < r ; i++ ) {
		for ( int j = 0 ; j < c ; j++ ) {
			arr[i][j] = rand() % 6;
		}
	}

	// printing the array
	for ( int i = 0 ; i < r ; i++ ) {
		for ( int j = 0 ; j < c ; j++ ) {
			pis(arr[i][j]);
		}
		nln;
	}

	int* ptr = &arr[0][0];
	int n = r * c, ans = 0;
	for ( int i = 0 ; i < n ; i++ ) {
		ans += *ptr;
		ptr++;
	}

	printf("The sum of the elements are: %d", ans );
	nln;


	return 0;
}
