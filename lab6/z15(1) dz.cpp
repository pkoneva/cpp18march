#include "stdio.h"
#include "math.h"

int main()
{    
    int a=0, n=20, b=0;
    printf("Xod reshenia");
    while(n<=39){
   	     a=pow(n,3)+a;
   	     n=n+1;
   	     b=pow(n,3);
   	     printf("%d + %d = %d\n", a, b, (a+b));
    }
    printf("%d", a+b);
	return 0;
}
