#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

int main()
{
	float area, base, height;
	scanf("%f %f", &base, &height);
	if(base<=0){
		printf("Oschibka");
		return 1;
	}
	if(height<=0){
		printf("Oschibka");
		return 1;
	}
	area=base*height/2;
	printf("%.4f", area);
    return 0;
}
