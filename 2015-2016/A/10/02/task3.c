#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[80];
	int i=0;
	do
	{
	i=0;
	scanf("%s",s);
	while(s[i]!='\0')
		{
		if(s[i]>='a' && s[i]<='z')
			{
			s[i]=s[i]-('a'-'A');
			i++;
			}
		}
		printf("%s",s);
	}while(strcmp(s,"STOP")!=0);
}
