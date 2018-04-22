#include "stdio.h"

int main()
{ 
    int a, b, x=0, y=0, n, k;
    scanf("%d %d", &a, &b);
    if(a<0 or b<0){
    	printf("nepravilnoe znachenie");
    }
    
    	if(a>b){
    		n=b;
    		y=(a-b)/2;
    		while(x<y){
    			printf("%d<", n);
    			n=n+1;
    			x=x+1;
    		}
    		while(y<a-b){
    			printf("%d>", n);
    			n=n+1;
    			y=y+1;
    		}
    		printf("%d", n);
    	}
    	
    	else{
		    x=0;
    	    y=(b-a)/2;
    	    k=a;
    		while(x<y){
    			printf("%d<", k);
    			k=k+1;
    			x=x+1;
    		}
    		while(y<b-a){
			    printf("%d>", k);
			    y=y+1;
			    k=k+1;
    		}
    		printf("%d", k);
    		
    	}
    
}
