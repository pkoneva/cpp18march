#include "stdio.h"
#include "math.h"
int main()
{
	float Ek, Ep, m, u, g, h;
	scanf("%f %f %f", &m, &u, &h);
	if(m<=0 or u<=0){
		printf("massa ili scorost' otrizatelna ili 0");
		return 1;
	}
	if(h<0){
		printf("visota otrizatelna");
		return 1;
	}
	g=9.82;
    Ek=(m*pow(u,2))/2;
    Ep=m*g*h;
	printf("%.4f Ekin %.4f Epot", Ek, Ep);
    return 0;
}
