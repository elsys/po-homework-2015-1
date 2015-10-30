#include <stdio.h>
#include <string.h>
int number(char);
int main()
{
    int i,n=0;
    char s[5];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
		if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X'))
		{
			n=n+number(s[i+1])-1;
			i++;
			continue;
		}
		n=n+number(s[i]);
	}
	if(n<=256)
	{
		printf("\n Number = %d",n);
		printf("\n");
	}
	else
	{
		printf("\n Enter a smaller number ");
		printf("\n");
	}
	return 0;
}
int number(char s)
{
	switch(s)
	{
		case 'C': return 100;
		case 'L': return 50;
		case 'X': return 10;
		case 'V': return 5;
		case 'I': return 1;
		default : return 1;
	}
	return 0;	
}
