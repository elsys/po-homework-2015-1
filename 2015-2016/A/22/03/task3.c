#include <stdio.h>
#include <string.h>

int change (char);
char reverse (int);

int main()
{
	int i=0, n=0;
	int a=0, b=0;
	int p=0;
	char s[14];
	scanf("%s",s);
	n=strlen(s);
	while(1)
	{
		p=0;
		for(i=0; i<n-1; i++)
		{
			a=change(s[i]);
			b=change(s[i+1]);
			if(a>b)
			{
				a=a+b;
				b=a-b;
				a=a-b;
				p=1;
			}
			s[i]=reverse(a);
			s[i+1]=reverse(b);
		}
		if(p==0)
		{
			break;
		}
	}
	printf("%s\n",s);
	return 0;
}

int change (char d)
{
	int t;
	if ((d=='T') || (d=='J') || (d=='Q') || (d=='K') || (d=='A'))
	{
		switch (d)
		{
			case 'T':
				t=10;
				break;
			case 'J':
				t=11;
				break;
			case 'Q':
				t=12;
				break;
			case 'K':
				t=13;
				break;
			case 'A':
				t=14;
				break;
		}
	}
	else 
	{
		t=d-48;
	}
	return t;
}

char reverse (int d)
{
	char t;
	if ((d==10) || (d==11) || (d==12) || (d==13) || (d==14))
	{
		switch (d)
		{
			case 10:
				t='T';
				break;
			case 11:
				t='J';
				break;
			case 12:
				t='Q';
				break;
			case 13:
				t='K';
				break;
			case 14:
				t='A';
				break;
		}
	}
	else 
	{
		t=d+48;
	}
	return t;
}