#include "stdio.h"

int main()
{ 
    int w, h, i=0, n=0;
    scanf("%d %d", &w, &h);
    if(h<0 or w<0){
    	printf("nepravilnoe znachenie");
    	return 1;
    }
    if(h==0 or w==0){
    	printf(" ");
    }
    else{ 
        while(i<h){ 
            n=w;
		    while(n>i){
	        	printf("*");
	    	    n=n-1;
	    	    
	        }
	        n=0;
	        while(n<=i){
	        	printf("#");
	        	n=n+1;
	        }
	        n=w;
	        i=i+1;
            printf("\n");
        }
	   
    }
}
