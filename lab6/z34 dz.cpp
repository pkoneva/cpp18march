#include "stdio.h"

int main()
{ 
    int  h, w, i=0, n=0;
    scanf("%d %d", &w, &h);
    if(w<0 or h<0){
    	printf("nepravilnoe znachenie");
    }
    else{ 
	    if(w==0 or h==0){printf(" ");
    }
    	else{
    		printf(" ");
    		while(i<w){
			    printf("%d", i);
			    i=i+1;
    		}
    		i=0;
    		printf("\n");
    		while(n<h){
    			printf("%d", n);
    			while(i<w){
    				printf(".");
    				i=i+1;
    			}
    			i=0;
    			n=n+1;
    			printf("|\n");
    		}
    		i=0;
    		printf(" ");
    		while(i<w){
    			printf("-");
    			i=i+1;
    		}
    		
        
        }
   	}
}
