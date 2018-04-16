#include "stdio.h"
#include "math.h"

int main()
{    
     
	 int sum=0, i=20;
	 printf("Xod reshenia");
     while(i<=40){
	     printf("%d + %d", sum, (sum+pow(i,3)));
   	     sum=sum+pow(i,3);
        i=i+1;
	 }	
	 printf("\n%d", sum);
    
    
    return 0;
}

