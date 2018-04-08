#include "stdio.h"

int main()
{
	float shipKmH, cometMS;
	scanf("%f %f", &shipKmH, &cometMS);
	if(cometMS<0 or shipKmH<0){
		printf("U<0");
	}
	else{
	    if((shipKmH*1000/3600)>cometMS){
	     	printf("Korabl dogonit kometu. %.4f > %.4f", shipKmH, cometMS);
	}
		else{
		    printf("Korabl ne dogonit kometu. %.4f <= %.4f", shipKmH, cometMS);	
		}
	}
	
	return 0;
}
