#include "stdio.h"
#include "math.h"

int main()
{
	float a;
	scanf("%f", &a);
	if(a<0){
		printf("oschibka");
		return 1;
	}
	a=sqrt(a);
	printf("%.4f", a);
    return 0;
}
