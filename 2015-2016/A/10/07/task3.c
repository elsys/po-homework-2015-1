#include<stdio.h>
#include<stdlib.h>
int HexNumber(int c)
{
	char s;
	switch(c)
	{
		case 0:
		s='0';
		break;
		case 1:
		s='1';
		break;
		case 2:
		s='2';
		break;
		case 3:
		s='3';
		break;
		case 4:
		s='4';
		break;
		case 5:
		s='5';
		break;
		case 6:
		s='6';
		break;
		case 7:
		s='7';
		break;
		case 8:
		s='8';
		break;
		case 9:
		s='9';
		break;
		case 10:
		s='A';
		break;
		case 11:
		s='B';
		break;
		case 12:
		s='C';
		break;
		case 13:
		s='D';
		break;
		case 14:
		s='E';
		break;
		case 15:
		s='F';
		break;
		default:
		s='0';
	}
	return s;
}
int main()
{
	int number,i=0,j=0,k=0,palindrom=1,original;
	char array[20];
	do{
	scanf("%d",&number);
	}while(number<0);
	original=number;
	do{
		i=0;
		while(number>0)
		{
			array[i]=HexNumber(number%16);
			number=number/16;
			i++;
		}
		palindrom=1;
		for(j=0,k=i-1;j<=k;j++,k--)
		{
			if(array[j]!=array[k])
			{
				palindrom=0;
			}
		}
		if(palindrom==0)
		{
			original++;
			number=original;
		}
	}while(palindrom==0);
	for(j=0;j<i;j++)
	{
		printf("%c",array[j]);
	}
	
}