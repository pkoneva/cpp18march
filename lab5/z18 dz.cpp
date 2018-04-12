#include "stdio.h"

int main()
{
	int a, x, y, des, tys, sot, ed;
	scanf("%d", &a);
	if(a<1000 or a>9999){
	    printf("a ne v promejutke");
	} 
	else{
		tys=a/1000;
		sot=a/100;
		x=sot-tys*10;
		des=a/10;
		y=a-des*10;
	    if(x==y){
	        printf("sotny ravni edinicam");
	    }
	    else{
	        printf("sotni ne ravny edinicam");
	    }
    }
	return 0;
}

