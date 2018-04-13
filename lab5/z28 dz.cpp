#include "stdio.h"

int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if(a<=0 or b<=0 or d<=0 or c<=0){
		printf("nepravilnaya velichina");	
	}
	else{
		if(a<c & b<d){
			printf("razmeschenie vozmogno");
		}
		else{
	     	printf("razmeschenie ne vozmogno");	
		}
	}
	return 0;
}

