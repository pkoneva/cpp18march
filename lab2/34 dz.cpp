#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

int main()
{
	float aRad, aDeg, x;
	scanf("%f", &aDeg);
	aRad=aDeg*M_PI/180;
	x=sqrt(1-pow(sin(aRad),2));
    printf("%.4f", x);
    return 0;
}
