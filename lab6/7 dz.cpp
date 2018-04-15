#include "stdio.h"
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a<=b){ 
	    while(a<=b){
        	printf("%d ", a);
    	    a=a+1;
        }
    }
    else {
    	while(b<=a){
			printf("%d ", a);
    	    a=a-1;
    	}
    }
   return 0;
    
}
