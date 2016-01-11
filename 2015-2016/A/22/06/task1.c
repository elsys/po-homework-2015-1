#include <stdio.h>
#include <string.h>

void hexadecimal_to_decimal(void);
void decimal_to_hexadecimal(void);
int char_to_int(char);
char int_to_char(int);

int main ()
{
	char s;
	scanf("%c",&s);
	switch (s)
	{
		case 'h':
			hexadecimal_to_decimal();
			break;
		case 'd':
			decimal_to_hexadecimal();
			break;
	}
	return 0;
}

void hexadecimal_to_decimal(void)
{
	int i=0;
	int num1=0, num2=0;
	int dec[3];
	char hex[7];
	scanf("%s", hex);
	for (i=6; i!=0; i-=2)
	{
		num1=char_to_int(hex[i]);
		num2=char_to_int(hex[i-1]);
		dec[(i/2)-1]=num1*1+num2*16;
	}
	printf("rgb(%d, %d, %d)\n", dec[0], dec[1], dec[2]);
}

int char_to_int(char c)
{
	switch (c)
	{
		case '0':
			return 0;
			break;
		case '1':
			return 1;
			break;
		case '2':
			return 2;
			break;
		case '3':
			return 3;
			break;
		case '4':
			return 4;
			break;
		case '5':
			return 5;
			break;
		case '6':
			return 6;
			break;
		case '7':
			return 7;
			break;
		case '8':
			return 8;
			break;
		case '9':
			return 9;
			break;
		case 'a':
			return 10;
			break;
		case 'b':
			return 11;
			break;
		case 'c':
			return 12;
			break;
		case 'd':
			return 13;
			break;
		case 'e':
			return 14;
			break;
		case 'f':
			return 15;
			break;
	}
	return 0;

}

void decimal_to_hexadecimal(void)
{
	int i=0, n=0, temp[2];
	int dec[3];
	char help[4];
	char hex[6];
	for (i=0; i<=2; i++)
	{
		scanf("%s", help);
		n=strlen(help);
		if (i!=2)
		{
			n--;
		}
		switch (n)
		{
			case 1:
				dec[i]=char_to_int(help[0]);
				break;
			case 2:
				dec[i]=char_to_int(help[0])*10+char_to_int(help[1]);
				break;
			case 3:
				dec[i]=100*char_to_int(help[0])+10*char_to_int(help[1])+char_to_int(help[2]);
		}
	}
	for(i=0; i<3; i++)
	{
		n=1;
		if (dec[i]!=0)
		{
			while(dec[i]!=0)
			{
				temp[n]=dec[i]%16;
				dec[i]/=16;
				if (n==0)
				{
					hex[2*i]=int_to_char(temp[n]);
				}
				if (n==1)
				{
					hex[2*i+1]=int_to_char(temp[n]);
				}
				n--;
			}
		}
		else 
		{
			hex[2*i]='0';
			hex[2*i+1]='0';
		}
	}
	printf("#%s\n", hex);
}

char int_to_char(int i)
{
	switch (i)
	{
		case 0:
			return '0';
			break;
		case 1:
			return '1';
			break;
		case 2:
			return '2';
			break;
		case 3:
			return '3';
			break;
		case 4:
			return '4';
			break;
		case 5:
			return '5';
			break;
		case 6:
			return '6';
			break;
		case 7:
			return '7';
			break;
		case 8:
			return '8';
			break;
		case 9:
			return '9';
			break;
		case 10:
			return 'a';
			break;
		case 11:
			return 'b';
			break;
		case 12:
			return 'c';
			break;
		case 13:
			return 'd';
			break;
		case 14:
			return 'e';
			break;
		case 15:
			return 'f';
			break;
	}
	return 0;
}