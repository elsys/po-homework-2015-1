#include <stdio.h>
#include <string.h>

int main()
{
	int a=0;
	int i=0, n=0;
	char s[100];
	printf("Insert roman number:");
	scanf("%s",s);
	n=strlen(s);
	while(i!=n)
	{
		if (s[i]=='C')
		{
			a=a+100;
		}
		if (s[i]=='L')
		{
			a=a+50;	
		}
		if (s[i]=='X')
		{
			if((s[i+1]!='L') && (s[i+2]!='L'))
			{
				a=a+10;
			}
			else 
			{
				a=a-10;
			}
		}
		if (s[i]=='V')
		{
			a=a+5;
		}
		if (s[i]=='I')
		{
			if (s[n-1]=='I')
			{
				a=a+1;
			}
			else 
			{
				a=a-1;
			}
		}
		i++;
	}
	printf("%d\n",a);
	return 0;
}