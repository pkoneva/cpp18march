#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

int main()
{
	float areaCircle, areaSquare, a, d;
	scanf("%f %f", &areaCircle, &areaSquare);
	if(areaCircle<=0 or areaSquare<=0){
		printf("ploschad' dolgna bit' pologitel'noy");
		return 1;
	}
	a=sqrt(areaSquare);
	d=sqrt((4*areaCircle/M_PI));
	if(a<d){
		printf("Krug ne pomestitsa v kvadrate");
	}
	else {
	    printf("Krug pomestitsa v kvadrate");	
	}
	return 0;
}
