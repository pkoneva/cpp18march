#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

int main()
{
	float aRad, aDeg, bRad, bDeg, a;
	scanf("%f %f", &aDeg, &bDeg);
	aRad=aDeg*M_PI/180;
	bRad=bDeg*M_PI/180;
	a=sin(aRad)*cos(bRad)+cos(aRad)*sin(bRad);
	printf("%.4f", a);
    return 0;
}
