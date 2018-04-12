#include "stdio.h"

int main()
{
	float x, y, z;
	scanf("%f %f %f", &x, &y, &z);
	if(x<5 & x>-3){
	    printf("%.4f", x);
	}
	if(y<5 & y>-3){
	    printf("\n%.4f", y);
	}
	if(z<5 & z>-3){
	    printf("\n%.4f", z);
	}
	return 0;
}

