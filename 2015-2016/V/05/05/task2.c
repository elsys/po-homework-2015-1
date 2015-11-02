#include <stdio.h>
#include <string.h>
#define max 100
int main()
{
	char s[max];
	scanf("%s",s);
	int b = strlen(s);
	int z = 0;
	int prom = 0;
	b = b - 1;
	while(z < b)
	{
		if(s[z] != s[b])
		{
	  		prom = 1;
	  		break;
		}
		b--;
		z++;
	}
	if(prom == 1)
		printf("0 \n");
	else 
		printf("1 \n");
	return 0;
}
