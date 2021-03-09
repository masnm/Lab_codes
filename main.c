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

int ret_des ( char a, char b )
{
	if ( a >= 'a' ) {
		a -= 'a'-'A';
	}
	if ( b >= 'a' ) {
		b -= 'a'-'A';
	}
	return a>b ? (int)(a-b) : (int)(b-a);
}

int main ()
{
	// finding absolute distances....
	char n;
	char str[1001];
	printf("Enter a character : ");
	scanf("%c",&n);
	printf("Enter string : ");
	scanf("%s",str);

	printf("Distance : ");
	int len = strlen(str);
	for ( int i = 0 ; i < len ; ++i ) {
		pis(ret_des(n,str[i]));
	}



	return 0;
}
