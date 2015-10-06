#include <stdio.h>

int main()
{
	int currentChar;
	for(currentChar=0;currentChar<=255;currentChar++)
	{
		printf("%d = %c\n",currentChar,currentChar);
	}
}
