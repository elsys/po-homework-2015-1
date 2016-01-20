#include <stdio.h>
#include <string.h>

void hex_to_dec();
void dec_to_hex(int);
int hex_decimal_convert(char, int);


int main()
{
	char choice; 
	int r, g, b;

	choice = getchar();

	if(choice == 'h')
	{
		hex_to_dec();
	}
	else
	{
		if(choice == 'd')
		{
			scanf("%d, %d, %d", &r, &g, &b);
			printf("#");
			dec_to_hex(r);
			dec_to_hex(g);
			dec_to_hex(b);
			printf("\n");


		}
		else
		{
			return 0;
		}
	}

	return 0;
}



void dec_to_hex(int color)
{
	char output[7];
    int temp, count , i;
    count=0;


    if(color == 0)
    {
        for(count = 0; count < 2; count++)
            output[count] = '0';
    }

    else
        while(color != 0)
        {
            temp = color % 16;
            
            if( temp < 10)
            {
               temp += '0';
            }

            else
            {
		    	temp += 87;
            }
               
            output[count] = temp;
            color /= 16;
            count++;
        }


    for(i = count-1; i >= 0; i--)
    {
        printf("%c", output[i]);
    }

}

void hex_to_dec()
{
	char input[8];
	int count;
	int red, green, blue;

	for(count=0; count<8; count++)
	{
		input[count] = getchar();
	}

	for(count=1; count<3; count++)
	{
		red = hex_decimal_convert(input[count], count)*16 + hex_decimal_convert(input[count+1], count);
	}
	for(count=3; count<5; count++)
	{
		green = hex_decimal_convert(input[count], count)*16 + hex_decimal_convert(input[count+1], count);
	}
	for(count=5; count<7; count++)
	{
		blue = hex_decimal_convert(input[count], count)*16 + hex_decimal_convert(input[count+1], count);
	} 


	printf("rgb(%d, %d, %d)\n", red, green, blue);

}


int hex_decimal_convert(char input, int count)
{
	switch(input)
	{
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		case 'a': return 10;
		case 'b': return 11;
		case 'c': return 12;
		case 'd': return 13;
		case 'e': return 14;
		case 'f': return 15;
		default: return 0;
	}
	
}
