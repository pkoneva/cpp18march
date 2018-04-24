
#include "stdio.h"

int main()
{ 
    int i=0, n=0, a, b, x=0;
    scanf("%d %d", &a, &b);
    if(a%2==0){
    	a=a+1;
    }
	if(b%2==0){
        b=b-1;
    }
    if(a<b){
	   while(a<b){ 
	   x=a;
		 while(i<=b-a){ 
		    while(n<i){
	        	printf(".");
	    	    n=n+1;
	    	}
	    	printf("%d\n", x); 
		    x=2+x;
	        n=0;
	        i=i+2;
            }	
		} i=0; x=a;
		
    
	}
    
     i=0; n=0;
   
}

