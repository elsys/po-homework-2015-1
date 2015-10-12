#include<stdio.h>
#include<string.h>
int main()
{
	char s[500], m, p[500];
	int i,n,t=0,e;
	printf("Enter text: ");
	scanf("%s",s);
	i=strlen(s);
	for(n=0; n<=i; n++)
	{
	m=s[n];
	if(m=='S')
		{
		m=s[n+1];
		if(m=='T')
			{
			m=s[n+2];
			if(m=='O')
				{
				m=s[n+3];
				if(m=='P')
					{
					t=n;
					break;
					}
				}
			}
		}
	if(t!=0)
		break;
	}
	for(e=0; e<=t; e++)
	{
	m=s[e];
	if(m>='a'&&m<='z')
		m=m-32;
	p[e]=m;
	}
	puts(p);
	return 0;

}
