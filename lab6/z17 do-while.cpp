#include "stdio.h"


int main()
{ 
    int a, sum=0, n=0;
    do{
	 	scanf("%d", &a);
        sum=sum+a;
        n=n+1;
	 }
	 while(a != 0);
	 printf("%d %d", sum, n);
	 return 0;
}
