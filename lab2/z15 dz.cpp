#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

int main()
{
	float circumference, r;
	scanf("%f", &r);
	if(r<=0) {
		printf("r ne podxodit");
		return 1;
	}
	circumference=2*M_PI*r;
	printf("%.4f", circumference);
    return 0;
}
