#include "stdio.h"
#include "math.h"

int main()
{
	float x, R;
	scanf("%f", &x);
	if(x<5){
		printf("pod kornem otriz zhach");
		return 1;
	} 
	R=(sqrt(x+5)+sqrt(x-5))/(2*sqrt(x));
	printf("%.4f", R);
	return 0;
}
