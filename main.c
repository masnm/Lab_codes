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

int main ()
{
	int ra=0, ca=0, rb=0, cb=0;
	again:
	printf("Enter the number of rows for first matrix : "); si(ra);
	printf("Enter the number of columns for first matrix : "); si(ca);
	printf("Enter the number of rows for second matrix : "); si(rb);
	printf("Enter the number of columns for second matrix : "); si(cb);
	if ( ra < 1 || ca < 1 || rb < 1 || cb < 1 ) {
		printf("invalid input. try again.\n");
		goto again;
	}

	if ( ca != rb ) {
		printf("Multiplication is not possible.");
		return 0;
	}

	int ma[ra][ca], mb[rb][cb], ans[ra][cb];

	for ( int i = 0 ; i < ra ; i++ ) {
		for ( int j = 0 ; j < ca ; j++ ) {
			ma[i][j] = rand() % 6;
		}
	}

	for ( int i = 0 ; i < rb ; i++ ) {
		for ( int j = 0 ; j < cb ; j++ ) {
			mb[i][j] = rand() % 6;
		}
	}

	for ( int i = 0 ; i < ra ; i++ ) {
		for ( int j = 0 ; j < cb ; j++ ) {
			ans[i][j] = 0;
		}
	}

	for ( int i = 0 ; i < ra ; i++ ) {
		for ( int j = 0 ; j < cb ; j++ ) {
			for ( int k = 0 ; k < ca ; k++ ) {
				ans[i][j] += ma[i][k] + mb[k][i];
			}
		}
	}

	for ( int i = 0 ; i < ra ; i++ ) {
		for ( int j = 0 ; j < cb ; j++ ) {
			pis(ans[i][j]);
		}
		nln;
	}


	return 0;
}
