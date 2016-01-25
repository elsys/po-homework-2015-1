#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char n[50];
	int i;
	scanf("%s",n);
	for(i=strlen(n)-1;i>=0;i--)
	{
		printf("%c",n[i]);
	}
	return 0;
}
