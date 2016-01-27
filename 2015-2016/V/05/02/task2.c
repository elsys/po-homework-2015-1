#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
	char c[MAX];
	int Go_On,i = 0,j,b = 0;
	do
	{
		scanf("%s",c);
		i = 0;
		j = strlen(c);
		while(i < j)
		{
			if(c[i] == 'S')
			{
				if(c[i+1] == 'T')
				{
					if(c[i+2]=='O')
					{
						if(c[i+3]=='P')
						{
							Go_On = 1;
							break;
						}
					}
				}
			}
			
			i++;
		}
		b = 0;
		while(b < j && Go_On != 1)
		{
			if(c[b] < 'Z')
				printf("%c",c[b]);
			else
				printf("%c",c[b] - 32);
			b++;
		}
		printf("\n");
	}
	while(Go_On != 1);
	return 0;
}
