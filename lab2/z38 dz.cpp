#include "stdio.h"
#include "math.h"

int main()
{
	float x1, x2, r;
	scanf("%f %f", &x1, &x2);
	r=sqrt(pow(x1,2)+pow(x2,2));
	printf("%.4f", r);
	return 0;
}
