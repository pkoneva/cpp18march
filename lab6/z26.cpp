#include "stdio.h"


int main()
{   
    int a=100;
    while(a<=1000){
    	if(a%13==0){
		    printf("%d + ", a);
    	}
    	else{
    		printf("%d ", a);
    	}
    	a=a+1;
    	
    }
}
