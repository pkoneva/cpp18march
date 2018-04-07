#include "stdio.h"
#include "math.h"

int main()
{
	float D, a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	if(a==0){
		printf("a ne dolgno bit' ravno 0");
	}
	else{ 
	D=pow(b,2)-4*a*c;
	printf("%.4f", D);
    }
    return 0;
}
