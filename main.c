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

void do_task ()
{
	char s[105]; scanf("%s",s);
	int len = strlen(s);
	for ( int i = 0 ; i < len ; i++ ) {
		int count = 0, j=i+1;
		while ( j < len && s[j] == s[i] ) {
			j++;
			count++;
		}
		if ( count >= 6 ) {
			printf("YES");
			return;
		}
	}
	printf("NO");
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
