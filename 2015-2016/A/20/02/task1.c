#include <stdio.h>
#include <string.h>

int main()
{
	int i;	

	for(i=0; i<=255; i++)
	{
		printf("%d %c\n", i, i);
	}
	return 0;
}