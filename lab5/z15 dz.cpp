#include "stdio.h"

int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	if(x<=0 or y<=0 or z<=0){
	    printf("storony otruz ili 0");
	} else{
	
	if(x==y or x==z or y==z){
	    printf("treugol'nik ravnobedrenny");
	}
	else{
	    printf("treugol'nik ne ravnobedrenny");
	}
}
	return 0;
}

