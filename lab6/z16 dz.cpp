#include "stdio.h"
int main()
{
    float	i=1, n, sum=0;
	scanf("%f", &n);
	if(n<=0){
		printf("nepravil'noe znach");
	}
	else{while(n>=i){
   	    sum=sum+1/n;
        n=n-1;
    }
    printf("%f ", sum);
	}
    
return 0;
    
}
