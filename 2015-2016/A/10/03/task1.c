#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Findvalue(char a)
{
	int v=0;
	switch (a)
	{
	case 'A':
	v=14;
	break;
	case 'K':
	v=13;
	break;
	case 'Q':
	v=12;
	break;
	case 'J':
	v=11;
	break;
	case 'T':
	v=10;
	break;
	default:
	v=a-'0';
	break;
	}
return v;
}

int main()
{
	int x,y,i,t;
	char a[14];
	printf("Enter cards:");scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	{
		t=0;
		if(a[i]>='2' && a[i]<='9')
		{
			t=1;
		}
		else if(a[i]=='A' || a[i]=='K' || a[i]=='Q' || a[i]=='J' || a[i]=='T')
		{
			t=1;
		}
		if(t==0)
		{
			return 0;
		}
	}
	for(x=0;x<strlen(a);x++)
	{
		for(y=0;y<strlen(a)-1;y++)
		{
			if(Findvalue(a[y])>Findvalue(a[y+1]))
			{
			int temp=a[y+1];
			a[y+1]=a[y];
			a[y]=temp;
			}
		}
	}
	printf("\n%s",a);
	return 0;
}
