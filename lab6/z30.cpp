#include "stdio.h"


int main()
{ 
    int y, n=0, i=0;
    char str[]="abcdefg";
    scanf("%d", &y);
    if(y<0 or y>20){
    	printf("nepravilnoe znachenie");
    }
    else{
    	while(n<y){
    		while(i<8){
				printf("%c", str[i]);
				i=i+1;
    		}
    		i=0;
		    printf("\n");
    	    n=n+1;

    	}
    	n=0;
    	i=0;
    	while(i<8){
    		while(n<y){ printf("%c", str[i]);
    	    n=n+1;
			
    		}
    		n=0;
			printf("\n");
			i=i+1;
    			
    	}
    }
}
    	
    	
    	
    	
    
