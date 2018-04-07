#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

int main()
{
	float cInRad, cInDeg, a, b, c;
	scanf("%f %f %f",&a, &b, &cInDeg);
	cInRad=cInDeg*M_PI/180;
	c=sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(cInRad));
	printf("%.4f", c);
	return 0;
}
