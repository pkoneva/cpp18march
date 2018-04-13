#include "stdio.h"

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	if(x<0 or y<0){
		printf("nepravilnaya velichina");	
	}
	else{
		if(x<=170 & x>=100 & y>=100 & y<=190){
			printf("tocka legit vnutri");
		}
		else{
	     	printf("tocka ne legit vnutri");	
		}
	}
	return 0;
}

