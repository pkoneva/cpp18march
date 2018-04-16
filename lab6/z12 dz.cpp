#include "stdio.h"
int main()
{
    int	i=-10, a, sum=0;
	scanf("%d", &a);
	if(a<-10 or a>10000){
		printf("nepravil'noe znach");
	}
	else{while(a>=i){
   	    sum=sum+a;
        a=a-1;
    }
    printf("%d ", sum);
	}
    
return 0;
    
}
