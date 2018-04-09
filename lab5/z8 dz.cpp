#include "stdio.h"
#include "math.h"

int main()
{
	int a, b, c, D;
	scanf("%d %d %d", &a, &b, &c);
	if(a==0){
		printf("dannoe uravnenie ne kvadratnoe");
		return 1;
	}
	D=pow(b,2)-4*a*c;
	if(D>0){
		printf("Uravnenie %d*x^2+%d*x+%d imeet dva veschestxennyx kornya",a, b, c);
	}
	else {
		    if(D==0){
		        printf("Uravnenie %d*x^2+%d*x+%d imeet odin veschestxenny koren'",a, b, c);
		    }
			else{
					printf("Uravnenie %d*x^2+%d*x+%d ne imeet veschestxennyx korney",a, b, c);
			}	
	}
	return 0;
}
