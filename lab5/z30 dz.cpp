#include "stdio.h"

int main()
{
	int x, y, x1, x2, y1, y2;
	scanf("%d %d %d %d %d %d", &x, &y, &x1, &y1, &x2, &y2);
	if(x<0 or y<0 or x1<0 or x2<0 or y1<0 or y2<0){
		printf("nepravilnaya velichina");	
	}
	else{
		if((x-x1)/(x2-x1)==(y-y1)/(y2-y1)){
			printf("tocka prinadlegit pryamoy");
		}
		else{
	     	printf("tocka ne prinadlegit pryamoy");	
		}
	}
	return 0;
}

