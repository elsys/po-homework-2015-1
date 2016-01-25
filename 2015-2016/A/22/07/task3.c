#include <stdio.h>

int pal(int);
char num(int);

int main()
{
	int n, temp=1, i=0, help[100];
	scanf("%d",&n);
	while(temp!=0)
	{
		temp=pal(n);
		n++;
	}
	n--;
	while(n!=0)
	{
		help[i]=n%16;
		n=n/16;
		i++;
	}
	i--;
	while (i!=-1)
	{
		printf("%c", num(help[i]));
		i--;
	}
	printf("\n");
	return 0;
}

int pal(int n)
{
	int i=0, j=0, temp[100];
	while(n!=0)
	{
		temp[i]=n%16;
		n=n/16;
		i++;
	}
	i--;
	while(i>=j)
	{
		if(temp[i]!=temp[j])
		{
			return 1;
		}
		j++;
		i--;
	}
	return 0;
}

char num (int i)
{
		switch (i)
	{
		case 10:
			return 'A';
			break;
		case 11:
			return 'B';
			break;
		case 12:
			return 'C';
			break;
		case 13:
			return 'D';
			break;
		case 14:
			return 'E';
			break;
		case 15:
			return 'F';
			break;
		default:
			i=i+'0';
			return i;
	}
}