#include "stdio.h"


int main()
{ 
    int a, sum=0, n=0;
    do{
	 	scanf("%d", &a);
        sum=sum+a;
        n=n+1;
	 }
	 while(sum <= 1000);
	 printf("%d", n);
	 return 0;
}
