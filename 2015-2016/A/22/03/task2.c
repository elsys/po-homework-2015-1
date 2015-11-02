#include <stdio.h>
#include <string.h>

int main()
{
	int n=0;
	char s[100];
	fgets(s, 101, stdin);
	n=strlen(s);
	while(n!=-1)
	{
		printf("%c",s[n]);
		n--;
	}
	printf("\n");
	return 0;
}