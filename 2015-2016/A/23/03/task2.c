#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char n[50];
	int i;
	printf("Write a word:");scanf("%s",n);
	printf("\n");
	for(i=strlen(n)-1;i>=0;i--)
	{
		printf("%c",n[i]);
	}
	printf("\n");
	return 0;
}
