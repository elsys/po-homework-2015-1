#include <stdio.h>
#include <string.h>

int main()
{
	int c, len;
	char str[100];
	
	scanf("%s", str);
	len=strlen(str);
	
	for(c=0; c<=len; len--)
	{
		printf("%c", str[len]);
	}

	return 0;
}
