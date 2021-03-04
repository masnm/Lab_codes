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

#include <stdarg.h>
void print_ints ( int count, ... )
{
	va_list args;

	va_start ( args, count );

	for ( int i = 0 ; i < count ; ++i ) {
		int value = va_arg ( args, int );
		printf("%d : %d\n", i, value );
	}

	va_end ( args );
}

void do_task ()
{
	print_ints ( 5, 1, 2, 3, 4, 5 );
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
