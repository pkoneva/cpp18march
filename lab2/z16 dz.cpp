#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

int main()
{
	float Vshara, r;
	scanf("%f", &r);
	if(r<=0) {
		printf("r ne podxodit");
		return 1;
	}
	Vshara=4*M_PI*pow(r,3)/3;
	printf("%.4f", Vshara);
    return 0;
}
