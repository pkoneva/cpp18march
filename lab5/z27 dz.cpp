#include "stdio.h"

int main()
{
	int a;
	scanf("%d", &a);
	if(a<=100 & a>=-10){
			
		if(a>9 & a<21){
			printf("%d-y", a);
		}
		else{
		    if(a==40){
		    	printf("%d-o", a);
		    }
		    else{
			    if(a%10==1 or a%10==4 or a%10==5 or a%10==9 or a%10==0){
				    printf("%d-y", a);
			    }
			    else{
				    if(a%10==3){
			             printf("%d-i", a);
		            }
		            else{
		            	printf("%d-o", a);
		            }
			    }
		    }			
			
		    
		}
	
	}
	
	return 0;
}
