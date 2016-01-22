#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char hex[10];
	int input;
	int n;
	int i;
	scanf("%d",&input);
	while (1)
	{
		sprintf(hex,"%X",input);
		for(i=0;i<10;i++)
		{
			n=i;
			if(hex[i]== '\0')
			{
				break;
			}
		}
		char hx[n];
		char rev[n];
		int start=0;
		for (i=0;i<n;i++)
		{
			hx[i] = hex[i];
		}
		for (i=n-1;i>=0;i--)
		{
			rev[start++] = hx[i];
		}
		if(strcmp(hx,rev)==0)
		{
			printf("%s",hex);
			break;
		}
		if (input == 35) break;
		input++;
	}
}

