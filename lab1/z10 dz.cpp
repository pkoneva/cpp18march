#include "stdio.h"


int main()
{
	char USER[100], PASS[100], HOST[100], PORT[100], DB[100];
	scanf("%s %s %s %s %s", USER, PASS, HOST, PORT, DB);
	printf("User ID=%s;Password=%s;Host=%s;Port=%s;Database=%s;",  USER, PASS, HOST, PORT, DB);
	return 0;
}
