#include "stdio.h"

int main()
{ 
    int h, w, n=0, i=0, k=0;
    char s, q;
    scanf("%c %c %d %d", &s, &q, &w, &h);
    if(w<0 or h<0){
    	printf("nepravilnoe znachenie");
    }
    else{
    	
    	while(i<h){
    		while(n<w){ 
			printf("%c", s);
    	    n=n+1;
    		}
    		n=0;
			printf("\n");
			i=i+2;
			while(k<w){
    			printf("%c", q);
    			k=k+1;
    		}
    		k=0;
    		printf("\n");
    	}
    }
}
