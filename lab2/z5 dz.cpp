#include "stdio.h"
#include "math.h"

int main()
{
	int a, x;
	scanf("%d", &x);
	a=7*pow(x,2);
	a=a-3*x+6;
	printf("%d", a);
    return 0;
}
