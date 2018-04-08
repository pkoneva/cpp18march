#include "stdio.h"
#include "math.h"

int main()
{
	float Xa, Xb, Ya, Yb, r;
	scanf("%f %f %f %f", &Xa, &Ya, &Xb, &Yb);
	r=sqrt(pow((Xb-Xa),2)+pow((Yb-Ya),2));
	printf("%.4f", r);
	return 0;
}
