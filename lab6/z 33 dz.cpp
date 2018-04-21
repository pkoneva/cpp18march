#include "stdio.h"

int main()
{ 
    int  w, n=0;
    scanf("%d", &w);
    if(w<0){
    	printf("nepravilnoe znachenie");
    }
    else{ if(w==0){printf(" ");
    }
    	else{
    		printf("+");
    		while(n<w-2){ 
			    printf("-");
    	        n=n+1;
    		}
    		printf("+\n|");
    		n=0;
    		while(n<w-2){
    			printf(".");
    			n=n+1;
    		}
			printf("|\n+");
			n=0;
			while(n<w-2){ 
			    printf("-");
    	        n=n+1;
    		}
			printf("+");	
    }
    	}
}
