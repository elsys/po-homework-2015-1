#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEC_CODE_COLOR_MAX_SIZE 15
#define HEX_CODE_COLOR_MAX_SIZE 9

char* dec_to_hex(int number);
int* get_numbers(char[]);
void reverse_string(char []);

int main()
{
	char number_type;
	scanf("%c",&number_type);

	if(number_type == 'd')
	{
		char dec_code_color[DEC_CODE_COLOR_MAX_SIZE];
		scanf(" %[^\n]s",dec_code_color);

		int *numbers = get_numbers(dec_code_color);

		int red_dec;
		red_dec = numbers[0];
		int green_dec;
		green_dec = numbers[1];
		int blue_dec;
		blue_dec = numbers[2];

		char *red_hex;
		red_hex = dec_to_hex(red_dec);
		char *green_hex;
		green_hex = dec_to_hex(green_dec);
		char *blue_hex;
		blue_hex = dec_to_hex(blue_dec);

		printf("#%s%s%s", red_hex, green_hex, blue_hex);
	}
	else if(number_type == 'h')
	{
		char hex_code_color[HEX_CODE_COLOR_MAX_SIZE];
		scanf(" %[^\n]s",hex_code_color);

		char red_hex[] = {hex_code_color[1],hex_code_color[2]};
		char green_hex[] = {hex_code_color[3],hex_code_color[4]};
		char blue_hex[] = {hex_code_color[5],hex_code_color[6]};

		int red_dec;
		red_dec = (int)strtol(red_hex, NULL, 16);
		int green_dec;
		green_dec = (int)strtol(green_hex, NULL, 16);
		int blue_dec;
		blue_dec = (int)strtol(blue_hex, NULL, 16);

		printf("rgb(%d, %d, %d)", red_dec, green_dec, blue_dec);
	}

	return 0;
}

char* dec_to_hex(int number)
{
	char *hex_number = malloc(3);
	int temp,i = 0;
 	if(number == 0)
 	{
 		hex_number[0] = '0';
 		hex_number[1] = '0';
 		i = 2;
 	}
	while(number != 0)
	{
     	temp = number % 16;

		if(temp < 10)
		{
			temp = temp + 48;
		}
		else
		{
			temp = temp + 87;
		}

		hex_number[i++]= temp;
		number /= 16;
 	}
 	hex_number[i] = '\0';

 	reverse_string(hex_number);

 	return hex_number;
}


int* get_numbers(char str[])
{
	int *numbers = malloc(3);

	int i = 0,j = 0;

	for (j = 0; j < 3; ++j)
	{
		int curr_numb = 0;
		while(str[i] >= '0' && str[i] <= '9' && i < strlen(str))
		{
			curr_numb = curr_numb*10 + (str[i]-'0');
			i++;
		}
		i += 2;
		numbers[j] = curr_numb;
	}

	return numbers;
}

void reverse_string(char str[])
{
	const int str_len = strlen(str);
	char rev_str[str_len];

	int i,j;
	for (i = 0, j = str_len-1; i < str_len; i++, j--)
	{
		rev_str[i] = str[j];
	}

	for (i = 0; i < str_len; ++i)
	{
		str[i] = rev_str[i];
	}
}
