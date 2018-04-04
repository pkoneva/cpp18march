#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

int main()
{
	float area, edge;
	scanf("%f", &edge);
	if(edge<=0){
		printf("Oschibka");
		return 1;
	}
	area=6*pow(edge,2);
	printf("%.4f", area);
    return 0;
}
