#include "stdio.h"
#include "math.h"

int main()
{
	float r, R, h;
	scanf("%f", &R);
	if(R<0){
		printf("radius dolgen bit' >=0");
		return 1;
	}
	r=6350;
	h=sqrt(pow((r+R),2)-pow(r,2));
	printf("rasst = %.4f", h, "km");
	return 0;
}
