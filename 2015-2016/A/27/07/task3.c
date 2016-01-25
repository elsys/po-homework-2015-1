#include <stdio.h>
#include <string.h>
#define SIZE 10
int palindrome(int);
void dec_to_hex(int);
char hex_number[SIZE];
int main()
{
	int number;
	scanf("%d", &number);
	if(number==0)
	{ 
		printf("0");
		return 0;
	}
	if(palindrome(number)) printf("%s", hex_number);
	else 
	{
		while(!palindrome(number))
			number++;
		printf("%s", hex_number);
	}
	return 0;
}
int palindrome(int number)
{
	int length,i,j;
	*hex_number='\0';
	dec_to_hex(number);
	/* Defines where checking should start. It depends on the length: if it's an even or an odd number */
	length=strlen(hex_number);
	j=length/2;
	i=length/2;
	if((length-1)%2) i--;
	while(hex_number[j]!='\0')
	{
		if(hex_number[i]!=hex_number[j]) return 0;
		else
		{
			i--;
			j++;
		}
	}
	return 1;
}
void dec_to_hex(int number)
{
	int i;
	for(i=0; number!=0; number=number/16, i++)
	{
		if(number%16>=10) hex_number[i]=number%16+55;
		else hex_number[i]=number%16+'0';
	}
}
