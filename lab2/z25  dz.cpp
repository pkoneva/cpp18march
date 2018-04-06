#include "stdio.h"

int main()
{
	float u1, u2, l, t;
	scanf("%f %f %f", &u1, &u2, &l);
	if(u1<0 or u2<0){
		printf("skorost' otrizatelna");
		return 1;
	}
	if(l<0){
		printf("dlina otrizatelna");
		return 1;
	}
    t=l/(u1+u2);
	printf("%.4f h", t);
    return 0;
}
