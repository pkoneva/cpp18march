#include "stdio.h"

int main()
{
	int m, p, x;
	scanf("%d %d", &m, &p);
	if(p==0){
		printf("na 0 nelza delit'");
	}
	else{
	    if(m%p==0){
		    x=m/p;
	        printf("%d", x);
	    } 
	    else{
		    printf("m ne delitsa nazelo na p");
	    }
	}	

	return 0;
}

