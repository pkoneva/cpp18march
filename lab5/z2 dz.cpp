#include "stdio.h"

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if(a>b){
		printf("Naibol'shee %d, naimen'shee %d", a, b);
	}
		else{
		    printf("Naibol'shee %d, naimen'shee %d", b, a);	
		}
	return 0;
}
