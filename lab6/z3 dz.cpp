#include "stdio.h"
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a<b){ 
	    while(a<=b){
        	printf("%d\n", a);
    	    a=a+1;
        }
    }
    else {
    	printf("nepravil'nye znachenia");
    }
   return 0;
    
}
