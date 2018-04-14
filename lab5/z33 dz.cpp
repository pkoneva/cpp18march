#include "stdio.h"

int main()
{
	int t;
	scanf("%d", &t);
	
	
	    if(t<0 or t>59){
		    printf("t ne v intervale");
	    }

	    else{
	        if(t%5==2 or t%5==1 or t%5==0)
			{
		        printf("zeleny");
	        }
	    
	        else{
		        printf("krasny");
	        }
	    }
	
	
	return 0;
}
