#include "stdio.h"

int main()
{
	float a, b, c ,d, x;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	if(a==0 or d==0){
		printf("v znamenatele 0");
	}
	else{
		x=(a*d+b*c)/(a*d);
        printf("%.4f", x);
    }
	return 0;
}
