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

long double f ( float a )
{
	return (a*a*a*a) + (a*a) + 1;
	// return pow(a,4) + pow(a,2) + 1;
}

int main ()
{
	float start = 0.01, end = 0.5;
	while ( start <= end ) {
		printf("For x = %.2f the value of f(x) = %Lf\n", start, f(start));
		start += 0.01;
	}



	return 0;
}
