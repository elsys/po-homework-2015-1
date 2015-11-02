#include<stdio.h>
#include<string.h>

int main()
	{
		int a,i;
		char s[30];
		fgets(s, 30, stdin);
		a=strlen(s);
		for(i=a;i>=0;i--)
		{
			printf("%c",s[i]);
		}
		printf("\n");
		return 0;
	}
