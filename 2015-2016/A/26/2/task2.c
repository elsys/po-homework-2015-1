#include <stdio.h>
#include <string.h>

int main()
{
	int c, len;
	char s[50];
	scanf("%c", s);
	len=strlen(s);
	c=0;	
	while(len>c)
	{
		printf("\n%c", s[c]-32);
		c++;
	}
	return 0;
}
