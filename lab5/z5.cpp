#include "stdio.h"

int main()
{
	float roadKm, lenghtFeet;
	scanf("%f %f", &roadKm, &lenghtFeet);
	if(roadKm<0 or lenghtFeet<0) {
		printf("dlina otrizatelna");
	 
	return 1;
}
	if(1000*roadKm<0.305*lenghtFeet){
	    printf("Kab dost");
}
	else{
		printf("Kab ne dost");
	}
	
	
    return 0;
}
