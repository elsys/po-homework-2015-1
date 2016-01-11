#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void dec(char*);
void hex(char*);
void convert_to_hex(char*);
int convert_to_dec(char*);

int main()
{
	char convert;
	char color[20];

	scanf("%c\n", &convert);

	fgets(color, 20, stdin);

	if (convert == 'h') 
	{
		hex(color);
	}
	else if (convert == 'd')
	{
		dec(color);
	}

	
	printf("\n"); /*?*/
	return 0;
}

void hex(char *color)
{
	int i, l, c;
	char hex_number[2];

	l = strlen(color) - 1;

	for (i = 1; i < l; i+=2)
	{
		for(c = i; c <= i+1; c++)
		{
			hex_number[c] = color[i];
		}

		if(i <= 4)
			printf("%d, ", convert_to_dec(hex_number));
		else 
			printf("%d)", convert_to_dec(hex_number));
	}
}

void dec(char *color)
{
	printf("DEC:	Huh, i bet it wouldn't work\n%s\n", color);

	int l, i, c;
	char dec_number[3];

	l = strlen(color);
	
	printf("#");
	for (i = 0; i < l; i++)
	{
		for(c = 0; color[i] != ','; c++)
		{
			dec_number[c] = color[i];
		}

		convert_to_hex(dec_number);

		while(color[i] == ' ')
			i++;
	}
}






int convert_to_dec(char *hex_number)
{
	int sum = 0, i, c;
	for(i = 0; i < 2; i++)
	{
		if(hex_number[i] >= '9')
			for (c = 0; c <= 5; c++)
			{
				if(hex_number[i] == 'a' + c)
					hex_number[i] = c + 10 + '0';
			}
	}

	sum = sum + (hex_number[0] - '0')*16; 
	sum = sum + (hex_number[1] - '0')*1;

	return sum;
}

void convert_to_hex(char *dec_number)
{	
	int second_reminder, first_reminder, number, i;
	char letter;

	number = atoi(dec_number);

	first_reminder = number%16;
	number/=16;
	second_reminder = number%16;
	
	if(second_reminder < 10)
		letter = second_reminder;
	else 
		for (i = 10; i <= 15; i++)
		{
			if(second_reminder == i)
				letter = 'a' + (i - 10);
		}
	printf("%c", letter);


	if(first_reminder < 10)
		letter = first_reminder;
	else 
		for (i = 10; i <= 15; i++)
		{
			if(first_reminder == i)
				letter = 'a' + (i - 10);
		}
	printf("%c", letter);

}





