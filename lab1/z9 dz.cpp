#include "stdio.h"


int main()
{
	char x[100], y[100], r[100], fill[100];
	scanf("%s %s %s %s", x, y, r, fill);
	printf(" <circle cx=\"%s\" cy=\"%s\" r=\"%s\" fill=\"%s\"/>",  x, y, r, fill);
	return 0;
}



