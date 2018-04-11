#include "stdio.h"
int main()
{
    int i=100, n=501, sum=0;
	printf("Xod reshenia");
	
	printf("100");
	printf("201");
	printf("303");
	printf("405");
	
	
	printf("\nXod reshenia");
	int sum1=100;
	printf("%d", sum1);
	sum1=sum1+101;
	printf("%d", sum1);
	sum1=sum1+102;
	printf("%d", sum1);
	sum1=sum1+103;
	
	printf("\nXod reshenia");
	sum=i;
	printf("%d", sum);
	i=i+1;
	sum=sum+i;
	printf("%d", sum);
		i=i+1;
	sum=sum+i;
	printf("%d", sum);
		i=i+1;
	sum=sum+i;
	
	
	i=100; n=501; sum=0;
	printf("\nXod reshenia");
    while(i<n){
   	    sum=sum+i;
        printf("%d ", sum);
		i=i+1;
    }
    
return 0;
    
}
