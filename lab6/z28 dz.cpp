#include "stdio.h"
int main()
{
    int	a=1, x;
	scanf("%d", &x);
	if(x<=0){
		printf("X dolgen bit' >0");
	}
	else{
	    while(a<=x){
			if(x%a==0){
			    printf("%d ", a);
                a=a+1;
			}
			else{
				a=a+1;
			}
   	        
        }
   
	}
    
return 0;
    
}
