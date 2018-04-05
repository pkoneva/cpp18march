#include "stdio.h"
#include "math.h"

int main()
{
	float a, b;
	scanf("%f", &a);
	b=12*pow(a,2)+7*a-16;
	printf("%.4f", b);
    return 0;
}
