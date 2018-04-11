#include "stdio.h"

int main()
{
	int X, i=10, n=21;
	scanf("%d", &X);
	while(i<n){
		
		if(X==i){	
		    printf("\n%d+", X);
		}
		else{
		    printf("\n%d", i);
		}
	i=i+1;
	}
}

