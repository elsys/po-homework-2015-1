#include <stdio.h>
#include <string.h>

void convert(char);

int main()
{
	char c[5], temp;
	int cnt;

	scanf("%s", c);

	for(cnt=0; cnt<strlen(c); cnt++)
	{
		temp = c[cnt];
		convert(temp);
		printf("\n");
	}


	return 0;
}


void convert(temp)
{
	switch(temp)
	{
		case 'I': printf("1"); break;
		case 'V': printf("5"); break;
		case 'X': printf("10"); break;
		case 'L': printf("50"); break;
		case 'C': printf("100"); break;
		default: break;
	}

}

