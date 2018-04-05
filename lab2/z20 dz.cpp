#include "stdio.h"
#include "math.h"

int main()
{
	float a, b, x;
	scanf("%f %f", &a, &b);
	if(b<0 or a<-sqrt(b)){
		printf("b or a ne podxodit");
		return 1;
	}
	x=-5*sqrt(a+sqrt(b));
	printf("%.4f", x);
    return 0;
}
