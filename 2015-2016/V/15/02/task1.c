#include <stdio.h>
#ifndef ASCII_COUNT
#define ASCII_COUNT 255
#endif

int main()
{

	int i = 0;
loop:
	if(i <= ASCII_COUNT)
	{
		printf("%c %d\n",i,i);
		i++;
		goto loop;
	}
	return 0;
}

#undef ASCII_COUNT
