#include "stdio.h"

int main()
{ 
    int h, w, n=0, i=0;
    char s;
    scanf("%c %d %d", &s, &w, &h);
    if(w<0 or h<0){
    	printf("nepravilnoe znachenie");
    }
    else{
    	
    	while(i<h){
    		while(n<w){ printf("%c", s);
    	    n=n+1;
			
    		}
    		n=0;
			printf("\n");
			i=i+1;	
    	}
    }
}
