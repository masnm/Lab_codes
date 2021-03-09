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

void initialize ( int* a, int len, int ran )
{
	for ( int i = 0 ; i < len ; ++i ) {
		a[i] = rand() % ran;
		pis(a[i]);
	}
	nln;
}

int max ( int a, int b )
{
	return a>b?a:b;
}

int main ()
{
	int x,y;
	printf("Enter number X : "); si(x);
	printf("Enter number Y : "); si(y);

	int a[x], b[y];

	printf("Arr1 : ");
	initialize ( a, x, 10);
	printf("Arr2 : ");
	initialize ( b, y, 10);

	int *pa = a+x-1, *pb = b+y-1;
	int an_mx = max(x,y);
	int ans[an_mx];
	if ( x > y ) {
		for ( int i = 0 ; i < x ; ++i ) {
			ans[i] = *pa;
			--pa;
			ans[i] += pb<b?0:*pb;
			--pb;
		}
	} else {
		for ( int i = 0 ; i < y ; ++i ) {
			ans[i] = *pb;
			--pb;
			ans[i] += pa<a?0:*pa;
			--pa;
		}
	}

	printf("Output : ");
	for ( int i = an_mx-1 ; i > -1 ; --i ) {
		pis(ans[i]);
	}



	return 0;
}
