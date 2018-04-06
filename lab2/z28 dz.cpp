#include "stdio.h"

int main()
{
	float R1, R2, R;
	scanf("%f %f", R1, R2);
	if(R1<0){
		printf("soprotivlenie otrizatelno");
		return 1;
	}
	if(R2<0){
		printf("soprotivlenie otrizatelno");
		return 1;
	}
    R=(1/R1)+(1/R2);
	printf("%.4f", R);
    return 0;
}
