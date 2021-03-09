#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long

#define si(a) scanf("%d",&a)
#define pi(a) printf("%d",a)
#define pis(a) printf("%d ",a)
#define nln printf("\n")

int main ()
{
	printf("Enter number n : ");
	int n; si(n);

	int div[51], dc=0;
	for ( int i = 2 ; i <= n ; ++i ) {
		if ( n%i == 0 ) div[dc++] = i;
	}

	bool barr[201] = { };
	barr[0] = true;
	for ( int i = 1 ; i < 201 ; ++i ) {
		for ( int j = 0 ; j < dc ; ++j ) {
			if ( i%div[j] == 0 ) {
				barr[i] = true;
				break;
			}
		}
	}

	for ( int i = 0 ; i < 201 ; ++i ) {
		if ( !barr[i] ) {
			pis(i);
		}
	}
	nln;

	return 0;
}
