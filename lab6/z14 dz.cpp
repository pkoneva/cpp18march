#include "stdio.h"
int main()
{
    int	b, a, x=1;
	scanf("%d %d", &a, &b);
	if(a<b){
		while(a<=b){
   	        x=x*a;
            a=a+1;
        }
    }
	else{
	    while(a>=b){
   	        x=x*a;
            a=a-1;
        }
    }
    printf("%d ", x);

    
return 0;
    
}
