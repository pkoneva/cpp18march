#include "stdio.h"
int main()
{
    int	b, a, sum=0;
	scanf("%d %d", &a, &b);
	if(a<b){
		while(a<=b){
			if(a%7==0){
			    sum=sum+a;
                a=a+1;
			}
			else{
				a=a+1;
			}
   	        
        }
    }
	else{
	    while(a>=b){
   	        if(a%7==0){
		        sum=sum+a;
                a=a-1;
			}
			else {
				a=a-1;
			}
        }
    }
    printf("%d ", sum);

    
return 0;
    
}
