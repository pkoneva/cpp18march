#include "stdio.h"
#include "math.h"

int main()
{
	float a, b, x;
	scanf("%f %f", &a, &b);
	if(b>0) {
		printf("b ne podxodit");
		return 1;
	}
	x=a*sqrt(-7*b);
	printf("%.4f", x);
    return 0;
}
