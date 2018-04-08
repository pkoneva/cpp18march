#include "stdio.h"
#include "math.h"

int main()
{
	float t, t1, t2, v, v1, v2;
	scanf("%f %f %f %f", &v1, &t1, &v2, &t2);
	if(v1<0 or v2<0){
		printf("V dogen bit' bol'she ii raven 0");
		return 1;
	}
	if(v1+v2==0){
		printf("v=0, nelza poschitat' t");
		return 1;
	}
	v=v1+v2;
	t=(t1*v1+t2*v2)/(v1+v2);
	printf(" V = %.4f, t = %.4f ", v, t);
	return 0;
}
