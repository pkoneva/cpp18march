#include "stdio.h"
#include "math.h"

int main()
{
	float X, Y, Z;
	scanf("%f %f %f", &X, &Y, &Z);
	if(X<0){
		printf("%.4f", X);
	}
	else{
		X=pow(X,2);
		printf("%.4f;  ", X);
	}
	if(Y<0){
		printf("%.4f; ", Y);
	}
	else {
		Y=pow(Y,2);
		printf("%.4f; ", Y);
	}
	if(Z<0){
		printf("%.4f", Z);
	}
	else{
		Z=pow(Z,2);
		printf("%.4f", Z);
	}
	return 0;
}
