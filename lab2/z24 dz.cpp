#include "stdio.h"

int main()
{
	float C, F;
	scanf("%f", &C);
	if(C<-273.15){
		printf("chislo men'she absolutnogo nula");
		return 1;
	}
    F=C*1.8+32;
	printf("%.4f", F);
    return 0;
}
