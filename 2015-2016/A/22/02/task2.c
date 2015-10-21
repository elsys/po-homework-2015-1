#include <stdio.h>
#include <string.h>

int main()
{
	int i, n=0;
	char a[100];
	printf("Insert text:\n");
	while (1)
	{
		scanf("%s",a);
		i=strlen(a);
		while (i!=n)
		{
			if ((a[n]=='S') && (a[n+1]=='T') && (a[n+2]=='O') && (a[n+3]=='P'))
			{
				printf("\n");
				return 0;
			}
			else
			{
				if ((a[n]>='a') && (a[n]<='z')) 
				{
					printf("%c",a[n]-32);
				}
				else 
				{
					printf("%c",a[n]);
				}
			}	
			n++;
		}
		n=0;
		printf(" ");	
	}
	printf("\n");
}
