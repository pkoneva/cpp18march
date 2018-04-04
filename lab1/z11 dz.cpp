#include "stdio.h"


int main()
{
	char a[100], b[100], c[100];
	scanf("%s %s %s", a, b, c);
	printf("Kvadratnoe uravnenie %s*x*x + %s*x + %s=0 \nEgo diskriminant vychislayetsa po formule d=%s*%s - 4*%s*%s", a, b, c, b, b, a, c);
	return 0;
}
