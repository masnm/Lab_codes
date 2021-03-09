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

bool arr[1005] = { };
void prepare_lookup_table ()
{
	arr[0] = arr[1] = true;
	for ( int i = 2 ; i * i < 1005 ; ++i ) {
		for ( int j = i*i ; j < 1005 ; j+=i ) {
			arr[j] = true;
		}
	}
}

void do_task ()
{
	printf("All coprime in range 100-1000 are : ");
	for ( int i = 100 ; i < 1000-2 ; ++i ) {
		if ( !arr[i] && !arr[i+2] ) {
			pis(i); pis(i+2); nln;
		}
	}
}

int main ()
{
	prepare_lookup_table();

	do_task();


	return 0;
}
