#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char string[100];
	scanf("%s", string);

	for (i = strlen(string) - 1; i >= 0; i--)
	{
		printf("%c", string[i]);
	}

	printf("\n");
	return 0;
}
