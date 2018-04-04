#include "stdio.h"
#include "math.h"

int main()
{
	float a;
	scanf("%f", &a);
	if(a>61){
		printf("oschibka");
		return 1;
	}
	a=3*sqrt(61-a);
	printf("%.4f", a);
    return 0;
}
