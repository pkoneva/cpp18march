#include "stdio.h"

int main()
{
	int aInitial,aRemainder;
	scanf("%d", &aInitial);
	aRemainder=aInitial%360;
	printf("%d", aRemainder);
    return 0;
}
