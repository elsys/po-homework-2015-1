#include <stdio.h>

void conversion(int );
void rgb_hexi();
void hexi_rgb();
int pass_the_meme(char );

int main()
{
	char x;
	x = getchar();
	switch (x) 
	{

	case 'd':
		rgb_hexi();
		break;

	case 'h':
		 hexi_rgb();
		break;
	default :
		printf("Enter either h or d");

	}

}

void rgb_hexi(){
	int r, g, b;
	scanf("%d,%d,%d", &r, &g, &b);
	printf("#");
	conversion(r);
	conversion(g);
	conversion(b);

	
}

void hexi_rgb()
{
	int r, g, b, i, temp1, temp2;
	char hexvalue[8];
	for (i = 0; i < 8; i++)
	{
		hexvalue[i] = getchar();
	}


	for (i = 1; i < 3; i++)
	{
		temp1 = pass_the_meme(hexvalue[i]);
		temp2 = pass_the_meme(hexvalue[i + 1]);
	}
	r = temp1 * 16 + temp2 * 1;


		
	for (i = 3; i < 5; i++)
	{
		temp1 = pass_the_meme(hexvalue[i]);
		temp2 = pass_the_meme(hexvalue[i + 1]);
	}
	g = temp1 * 16 + temp2 * 1;

		
	temp1 = pass_the_meme(hexvalue[6]);
	temp2 = pass_the_meme(hexvalue[7]);
	b = temp1 * 16 + temp2 * 1;

	printf("rgb(%d,%d,%d)", r, g, b);
}
void conversion(int colour)
{ 	
    char hex[7];
    int checker, i , k;
    i = k = 0;

    if(colour == 0){
        for(i = 0; i < 2; i++)
            hex[i] = '0';
    }

    else
        while(colour != 0){
            checker = colour % 16;
            
            if( checker < 10)
                checker = checker + '0';

            else
                checker = checker + 87;	
               
            hex[i] = checker;
            colour = colour / 16;
            i++;
        }

    for(k = i-1; k >= 0; k--)
        printf("%c", hex[k]);

}



int pass_the_meme(char test)
{
	
	switch (test)
	{
		case'0':
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
		default :
			return -1;
	}
}



