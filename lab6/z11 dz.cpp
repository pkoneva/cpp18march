#include "stdio.h"
int main()
{
    int	i=500, a, sum=0;
	scanf("%d", &a);
	if(a>500 or a<-100){
		printf("nepravil'noe znach");
	}
	else{while(a<=i){
   	    sum=sum+a;
        a=a+1;
    }
    printf("%d ", sum);
	}
    
return 0;
    
}
