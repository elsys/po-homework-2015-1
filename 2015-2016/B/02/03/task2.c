#include <stdio.h>
#include <string.h>

int main()
{
	char c[1000];	
	int  i;
	gets(c);


	i = strlen(c);
	while(i>-1)
	{
		printf("%c", c[i]);
		i--;
	}
	printf("\n");
}
