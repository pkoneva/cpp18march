#include "stdio.h"

int main()
{ 
    int h, w, n=0, i=0;
    char s, q;
    scanf("%c %c %d %d", &s, &q, &w, &h);
    if(w<0 or h<0){
    	printf("nepravilnoe znachenie");
    }
    else{
    	
    	while(i<h){
    		while(n<w){ 
			printf("%c", s);
			printf("%c", q);
    	    n=n+2;
			}
			if(w%2==1){
			printf("%c", s);	
			}
    		i=i+1;
    		n=0;
			
    		printf("\n");
    	}
    }
}
