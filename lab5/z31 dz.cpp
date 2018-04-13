#include "stdio.h"

int main()
{
	int a1, b1, a2, b2;
	scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
	if(a1>b1 or a2>b2){
		printf("znachenie a dolgno bit' men'she b");	
	}
	else{
		if(a2<b1 & a1<b2 & b2>b1){
			printf("peresekautsa (%d; %d)", a2, b1);
		}
		else{
			if(b1>b2 & a2>a1){
				printf("peresekautsa (%d; %d)", a2, b2);
			}
			else{
			    printf("ne peresekautsa");	
			}
	     	
		}
	}
	return 0;
}
