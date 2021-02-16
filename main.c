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
	if ( len > 10 ) {
		printf("%c%d%c",s[0],len-2,s[len-1]);
		nln;
		return;
	}
	printf("%s",s);
	nln;
}

int main ()
{
	prepare_lookup_table();

	ll t = 1;
	si(t);
	while ( t-- ) {
		do_task();
	}


	return 0;
}
