#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int to_dec(char*);
void to_hex(char*);

int main()
{
	char convert;
	char color[20];

	char hex_number[2], dec_number[3];

	scanf("%c\n", &convert);

	fgets(color, 20, stdin);

	if(convert == 'h')
	{
		printf("rgb(");
		for(int i = 1; i < 7; i+=2)
		{
			hex_number[0] = color[i];
			hex_number[1] = color[i+1];
			
			if(i < 5)
				printf("%d, ", to_dec(hex_number));
			else 
				printf("%d", to_dec(hex_number));
		}
		printf(")");
	}
	else if(convert == 'd')
	{
		printf("#");
		int l = strlen(color);
		for(int i = 0; i < l; i++)
		{
			for(int c = 0; c < 3; c++)
			{
				dec_number[c] = 0;
			}
			if(color[i] != ',' && color[i] != ' ')
			{
				for(int c = 0; color[i]>='0' && color[i]<='9'; c++)
				{
					dec_number[c] = color[i];
					i++;
				}
				to_hex(dec_number);
			}
		}
	}
	
	return 0;
}

int to_dec(char *hex_number)
{
	int temp;
	int result = 0;

	for(int i = 0; i < 2; i++)
	{
		if(hex_number[i] > '9')
		{
			temp = hex_number[i] - 'a' + 10;
		}
		else
			temp = hex_number[i] - '0';
		
		if(i == 0)
			result  = temp*16 + result;
		else
			result = result + temp;
	}
	return result;
}

void to_hex(char *dec_number)
{
	int number = atoi(dec_number);

	if(number == 0) 
		printf("00");
	else if(number <= 9)
		printf("0%x", number);
	else
		printf("%x", number);
			
}
