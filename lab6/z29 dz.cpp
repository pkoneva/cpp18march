#include "stdio.h"
int main()
{
    int	a=1, x, n=0;
	scanf("%d", &x);
	if(x<=0){
		printf("X dolgen bit' >0");
	}
	else{
	    while(a<=x){
			if(x%a==0){
				n=n+1;
                a=a+1;
			}
			else{
				a=a+1;
			}
   	        
        }
        if(n>2){
        	printf("chiclo sostavnoe");
        }
        else{
        	printf("chislo prostoe");
        }
	}
    
return 0;
    
}
