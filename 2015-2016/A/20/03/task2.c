#include <stdio.h>
#include <string.h>


int main()
{
	int count;
	char c[400];

	scanf("%s", c);

	count = strlen(c);

	for(; count>=0; --count)
	{
		printf("%c \n", c[count]);
	}

	return 0;
}


