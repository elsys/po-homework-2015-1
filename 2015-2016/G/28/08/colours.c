#include<stdio.h>

int hex_dec(char[]);
int dec_hex(char[]);


int main()
{
	char hex_des;
	char hex_str[100];

	scanf("%c", &hex_des);

	if (hex_des == 'd')
		{
			scanf("%s",hex_str);
			func(hex_str);

		}
	else if (hex_des == 'h')
		{
			scanf("%s",hex_str);
			func2( hex_str);
		}
	return 0;
}

int func(char hex_dec[100])
{


    return 0;
}

int func2(char hex_dec[100])
{

   
    return 0;
}

