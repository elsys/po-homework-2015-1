#include <stdio.h>
#include <string.h>
int getRomanValue(char number);
int checkRomanValue(char romanNumber[20]);
int main()
{
	char romanNumber[20];
	int i, curNum;
	while(1)
	{
		curNum=0;
		printf("Input roman number: ");
		scanf("%s", romanNumber);
		if(checkRomanN(romanNumber)==0)
		{
			printf("Input a valid roman number\n");
			continue;
		}
		for(i=0; i<strlen(romanNumber); i++)
		{
			if(getRomanValue(romanNumber[i])<getRomanValue(romanNumber[i+1]))
			{
				curNum+=getRomanValue(romanNumber[i+1]) - getRomanValue(romanNumber[i]);
				i++;
			}
			else
				curNum+=getRomanValue(romanNumber[i]);
		}
		if(curNum>256)
		{
			printf("Number is larger than 256\n");
			continue;
		}
		else
		{
			printf("Roman number in decimal is: %d\n", curNum);
			break;
		}
	}
	return 1;
}

int getRomanValue(char number)
{
	int value;
	switch(number){
	case 'I':
		value=1;
		break;
	case 'V':
		value=5;
		break;
	case 'X':
		value=10;
		break;
	case 'L':
		value=50;
		break;
	case 'C':
		value=100;
		break;
	}
	return value;
}
int checkRomanN(char romanNumber[20]) //Function to check if inputted string is valid with roman numerals rules
{
	int numerals[5]={0}, correct=1, i; // 0 - I 1 - V 2 - X 3 - L 4 - C XIX
	for(i=0;i<strlen(romanNumber);i++)
	{
		if(romanNumber[i]!='I' && romanNumber[i]!='V' && romanNumber[i]!='X' && romanNumber[i]!='L' && romanNumber[i]!='C')
		{
			switch(romanNumber[i]){
			case 'I':
				numerals[0]++;
				break;
			case 'V':
				numerals[1]++;
				break;
			case 'X':
				numerals[2]++;
				break;
			case 'L':
				numerals[3]++;
				break;
			case 'C':
				numerals[4]++;
				break;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		if(numerals[i]>3)
			return 0;
	}
	return 1;
}
