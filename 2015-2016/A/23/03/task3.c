#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int s(char b)
{
	int a=0;
	switch (b)
	{
		case '2':
		a=2;
		break;
		case '3':
		a=3;
		break;
		case '4':
		a=4;
		break;
		case '5':
		a=5;
		break;
		case '6':
		a=6;
		break;
		case '7':
		a=7;
		break;
		case '8':
		a=8;
		break;
		case '9':
		a=9;
		break;
		case 'T':
		a=10;
		break;
		case 'J':
		a=11;
		break;
		case 'Q':
		a=12;
		break;
		case 'K':
		a=13;
		break;
		case 'A':
		a=14;
		break;
		default:
		a=0;
	}
	return a;
}
int main()
{
	int i,z,t,x,y;
	char a[14],b[14]="23456789TJQKA";
	printf("Enter cards:");
	scanf("%s",a);
	for(i=0;i<strlen(a)-1;i++)
	{
		t=0;
		for(z=0;z<strlen(b);z++)
		{
			if(a[i]==b[z])
			{
				t=1;
			}
		}
		if(t==0)
		{
			printf("Invalid cards");
			return 0;
		}
	}
	for(x=0; x<strlen(a); x++)
	{
		for(y=0; y<strlen(a)-1; y++)
		{
			if(s(a[y])>s(a[y+1]))
			{
				int temp = a[y+1];
				a[y+1] = a[y];
				a[y] = temp;
			}
		}
	}
	printf("%s\n",a);
	return 0;
}
