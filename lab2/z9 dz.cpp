#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

int main()
{
	float aRad, aDeg, a;
	scanf("%f", &aDeg);
	aRad=aDeg*M_PI/180;
	a=5*cos(aRad);
	printf("%.4f", a);
    return 0;
}
