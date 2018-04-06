#include "stdio.h"
#include "math.h"

int main()
{
	float u0, a, t, l;
	scanf("%f %f %f", &u0, &t, &a);
	if(u0<0){
		printf("nach skorost' otrizatelna");
		return 1;
	}
	if(t<=0){
		printf("t nepravilnoe");
		return 1;
	}
    l=u0*t+((a*pow(t,2))/2);
	printf("l=%.4f", l);
    return 0;
}
