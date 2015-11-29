#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char n[50];
	int i;
	scanf("%s",n);
	i=strlen(n);
	while(i>=0)
	{
		printf("%c",n[i]);
		i--;
	}
	return 0;
}
