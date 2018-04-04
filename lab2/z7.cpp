#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

int main()
{
	float aRad, aDeg;
	scanf("%f", &aDeg);
	aRad=aDeg*M_PI/180;
	printf("%.4f", aRad);
    return 0;
}
