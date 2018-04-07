#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

int main()
{
	float aRad, aDeg, force, g, m;
	scanf("%f %f",&m, &aDeg);
	if(m<=0){
		printf("m otricatei'na ili 0");
	} else{
	
	    aRad=aDeg*M_PI/180;
	    g=9.8067;
	    force=m*g*cos(aRad);
	    printf("%.4f", force);
	}
    return 0;
}
