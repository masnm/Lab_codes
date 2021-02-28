#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long

#define si(a) scanf("%lld",&a)
#define pi(a) printf("%lld",a)
#define pis(a) printf("%lld ",a)
#define nln printf("\n")

void prepare_lookup_table ()
{
}

void catenation ( char a[], char b[], int l )
{
	if ( l == strlen(a) ) {
		return;
	}
	int len = strlen(b);
	b[len++] = a[l];
	b[len] = '\0';
	catenation ( a, b, ++l );
}

void do_task ()
{
	char one[1001], two[2005];
	printf("Enter string one : ");
	scanf("%s",one);
	printf("Enter string two : ");
	scanf("%s",two);
	catenation ( one, two, 0 );
	printf("Strings after catenation is : %s",two);
	nln;
}

int main ()
{
	prepare_lookup_table();

	ll t = 1;
//	si(t);
	while ( t-- ) {
		do_task();
	}


	return 0;
}
