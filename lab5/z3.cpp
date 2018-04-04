#include "stdio.h"
#include "math.h"
int main()
{
	float R;
	scanf("%f", &R);
	if(R>0){
		R=sqrt(R);
	    printf("%.4f", R);
}
	else{
			R=pow(R,2);
		printf("%.4f", R);
	}
	
    return 0;
}
