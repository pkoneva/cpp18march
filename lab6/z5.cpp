#include "stdio.h"
int main()
{
    int A, i=0;
    char B;
    scanf("%d %c", &A, &B);
    if(A<0){
    	printf("A otriz");
    	return 1;
    }
    printf("\"");
    while(i<A){
    	i=i+1;
    	printf("%c", B);
    }
    printf("\"");
    
}
