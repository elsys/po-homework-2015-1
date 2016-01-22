#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int Numbervalue(char c)
{
	int s=0;
	switch(c)
	{
	case '0':
	s=0;
	break;
	case '1':
	s=1;
	break;
	case '2':
	s=2;
	break;
	case '3':
	s=3;
	break;
	case '4':
	s=4;
	break;
	case '5':
	s=5;
	break;
	case '6':
	s=6;
	break;
	case '7':
	s=7;
	break;
	case '8':
	s=8;
	break;
	case '9':
	s=9;
	break;
	case 'A':
	case 'a':
	s=10;
	break;
	case 'B':
	case 'b':
	s=11;
	break;
	case 'C':
	case 'c':
	s=12;
	break;
	case 'D':
	case 'd':
	s=13;
	break;
	case 'E':
	case 'e':
	s=14;
	break;
	case 'F':
	case 'f':
	s=15;
	break;
	default:
	s=0;
	}
	return s;
}
	
int Hexvalue(char c)
{
	int s=0;
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
	s='a';
	break;
	case 11:
	s='b';
	break;
	case 12:
	s='c';
	break;
	case 13:
	s='d';
	break;
	case 14:
	s='e';
	break;
	case 15:
	s='f';
	break;
	default:
	s='0';
	}
	return s;
}

int main()
{
	char mode,HexNumber[7];
	int number1,number2,number3;
	scanf("%c",&mode);
	if(mode=='h')
	{
		scanf("%s",HexNumber);
		number1=Numbervalue(HexNumber[1])*16+Numbervalue(HexNumber[2]);
		number2=Numbervalue(HexNumber[3])*16+Numbervalue(HexNumber[4]);
		number3=Numbervalue(HexNumber[5])*16+Numbervalue(HexNumber[6]);
		printf("\nrgb(%d,%d,%d)",number1,number2,number3);
	}
	else
	{
		scanf("%d,%d,%d",&number1,&number2,&number3);
		if(number1<0)
		{
			number1=0;
		}
		if(number1>255)
		{
			number1=255;
		}
		if(number2<0)
		{
			number2=0;
		}
		if(number2>255)
		{
			number2=255;
		}
		if(number3<0)
		{
			number3=0;
		}
		if(number3>255)
		{
			number3=255;
		}
		printf("\n#%c%c",Hexvalue(number1/16),Hexvalue(number1%16));
		printf("%c%c",Hexvalue(number2/16),Hexvalue(number2%16));
		printf("%c%c\n",Hexvalue(number3/16),Hexvalue(number3%16));
	}
}
