#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

int main()
{
	float r, a, Sr, Sa;
	scanf("%f %f", &r, &a);
	if(r<0 or a<0){
		printf("velichina orizatel'na");
		return 1;
	}
	Sr=pow(r,2)*M_PI;
	Sa=pow(a,2);
	if(Sr>Sa){
		printf("Ploschad' kruga %.4f bol'she ploschadi kvadrata %.4f", Sr, Sa);
	}
	else {
	    printf("Ploschad' kvadrata %.4f bol'she ploschadi kruga %.4f", Sa, Sr);	
	}
	return 0;
}
