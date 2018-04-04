#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

int main()
{
	float znach, aRad, aDeg;
	scanf("%f", &aDeg);
	aRad=aDeg*M_PI/180;
	znach=sin(aRad);
	printf("%.4f", znach);
    return 0;
}
