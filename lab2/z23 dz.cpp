#include "stdio.h"

int main()
{
	int lengthSeconds, h, m, s;
	scanf("%d", &lengthSeconds);
	if(lengthSeconds<0){
		printf("chislo otrizatelnoe");
		return 1;
	}
	h=lengthSeconds/(60*60);
	m=(lengthSeconds/60)-h*60;
	s=lengthSeconds-h*3600-m*60;
	printf("%d h, %d m, %d s", h, m, s);
    return 0;
}
