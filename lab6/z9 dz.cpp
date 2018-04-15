#include "stdio.h"
int main()
{
    int a=1, b, c;
    scanf("%d", &b);
	while(a<=9){
		c=a*b;
        printf("%d * %d = %d\n", b, a, c);
    	a=a+1;
    }
    return 0;
    
}
