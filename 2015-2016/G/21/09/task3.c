#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_is_palindrome(char[]);
char* dec_to_hex(int number);
void reverse_string(char[]);

int main()
{
    int numb;
    scanf("%d",&numb);
    char *hex_numb;

    do
    {
        hex_numb = dec_to_hex(numb++);
    }while(!check_is_palindrome(hex_numb));


    printf("%s", hex_numb);
    return 0;
}

int check_is_palindrome(char str[])
{
    int start = 0;
    int end;
    end = strlen(str)-1;

    while(start < end)
    {
        if(str[start++] != str[end--])
        {
            return 0;
        }
    }
    
    return 1;
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
                    temp = temp + 55;
            }

            hex_number[i++]= temp;
            number /= 16;
 	}
        
 	hex_number[i] = '\0';

 	reverse_string(hex_number);

 	return hex_number;
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

