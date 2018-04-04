#include "stdio.h"


int main()
{
	char a[100];
	scanf("%s", a);
	printf("1)programmirovanie eto %s!\n", a);
	printf("2)programmirovanie eto %s", a);
	printf("!\n");
	printf("3)programmirovanie eto ");
	printf("%s", a);
	printf("!");
    return 0;
}
