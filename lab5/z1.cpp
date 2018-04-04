#include "stdio.h"

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if(a>b){
	    printf("pervoe");
}
	else
	if(a==b){
	    printf("ravny");
	}
	else
	{
	    printf("vtoroe");
	}

    return 0;
}
