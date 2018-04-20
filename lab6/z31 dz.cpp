#include "stdio.h"

int main()
{ 
    int y, n=0, i=0;
    scanf("%d", &y);
    if(y<0 or y>20){
    	printf("nepravilnoe znachenie");
    }
    else{
    	
    	while(i<10){
    		while(n<y){ printf("%d", i);
    	    n=n+1;
			
    		}
    		n=0;
			printf("\n");
			i=i+1;	
    	}
    }
}
    	
    	
    	
    	
    
