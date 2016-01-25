#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c;
	char a='\0';
	
	for(c=1; c<256; c++)
	{
	printf("%c=>%d", a, c);
	a++;	
	}
	return 0;
}
