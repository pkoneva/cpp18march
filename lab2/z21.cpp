#include "stdio.h"

int main()
{
	int totalM ,partCm, pol, ost;
	scanf("%d %d", &totalM, &partCm);
	if(totalM<0){
		printf("oschibka");
		return 1;
	}
		if(partCm<0){
		printf("oschibka");
		return 1;
	}
    pol=totalM*100/partCm;
    ost=100*totalM%partCm;
	printf("%d pcs & %d cm", pol, ost);
    return 0;
}
