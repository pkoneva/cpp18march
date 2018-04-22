#include "stdio.h"

int main()
{ 
    int a, b, x=0, y=0;
    scanf("%d %d", &a, &b);
    if(a<0 or b<0){
    	printf("nepravilnoe znachenie");
    }
    
    	if(a>b){
    		if(a%2==0){
    			x=a-1;
    		}
    		if(b%2==0){
    			y=b+1;
    		}
    		while(x>y){
    			printf("%d, ", x);
    			x=x-2;
    		}
    		printf("%d", y);
    		
    	}
    	else{
    		if(a%2==0){
    			x=a+1;
    		}
    		if(b%2==0){
    			y=b-1;
    		}
    		while(x<y){
    			printf("%d, ", x);
    			x=x+2;
    		}
    		printf("%d", y);
    		
    	}
    
}
