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

void show_sum_mul ( double a, double b )
{
	printf("The summation is: ");
	printf("%lf\n",a+b);
	printf("The Multiplication is: ");
	printf("%lf\n",a*b);
}

int main ()
{

	double a,b;
	printf("Enter two numbers: ");
	scanf("%lf %lf",&a,&b);

	show_sum_mul ( a, b );


	return 0;
}
