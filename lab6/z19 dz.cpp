#include "stdio.h"


int main()
{ 
    int a, n=0, k=0;
    do{
	 	scanf("%d", &a);
	 	if(a<=83){
		    n=n+1;
	     }
        if(a>=199){
			k=k+1;
			}	
        }
	 
	 while(a<=83 or a>=199);
	 printf("do -- %d , posle -- %d", n, k);
	 return 0;
}
