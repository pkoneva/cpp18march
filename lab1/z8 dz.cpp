#include "stdio.h"


int main()
{
	char a[100], b[100];
	scanf("%s %s", a, b);
	printf("INSERT INTO points (x, y) VALUES ('%s', '%s');",  a, b);
	return 0;
}



