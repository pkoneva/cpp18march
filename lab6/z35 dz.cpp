#include "stdio.h"

int main()
{ 
    int  h, i=0, n=0;
    char s;
    scanf("%c %d", &s, &h);
    if(h<0){
    	printf("nepravilnoe znachenie");
    }
    else{ 
        while(i<h){ 
		    while(n<=i){
	        	printf("%c", s);
	    	    n=n+1;
	    	    
	        }
	        n=0;
	        i=i+1;
            printf("\n");
        }
	   
    }
}
