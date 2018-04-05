#include "stdio.h"
#include "math.h"

int main()
{
	int V, a;
	scanf("%d", &a);
	if(a<=0) {
		printf("a ne podxopit");
		return 1;
	}
	V=pow(a,3);
	printf("%d", V);
    return 0;
}
