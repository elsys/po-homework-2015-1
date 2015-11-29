#include <stdio.h>
#include <string.h>

int main()
{	
	char curr[100];
	int  i,flag=0;
	
	while(flag==0)
	{
		scanf("%s",curr);
		if(strcmp(curr,"STOP")==0)
			flag=1;
		for(i=0;i<strlen(curr);i++)
		{
			if (curr[i]<'A' || curr[i]>'Z')
			{
				curr[i] = curr[i] - ('a' - 'A');
			}
		}
		if(flag==0)
		{
			printf("%s",curr);
		}
	}
	return 0;
}
