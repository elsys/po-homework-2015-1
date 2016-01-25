#include <stdio.h>
#include <string.h>
char hexadecimal(int);
int main()
{
    int number,number2, counter, counter2, check;
	char hex[16];
	scanf("%d", &number);
	do{
        for(counter = 0, number2 = number; number2 != 0; counter++){
            hex[counter] = hexadecimal(number2%16);
            number2 /= 16;
        }
        hex[counter] = '\0';
        for(counter = 0, counter2 = strlen(hex) - 1, check = 1; counter < (strlen(hex) - 1); counter++, counter2--){
            if(hex[counter] != hex[counter2]){
				check = 0;
				number++;
            }
        }
	}while(!check);
	printf("%s \n", hex);
	return 0;
}
char hexadecimal(int decimal){
	switch(decimal){
		case  0: return '0';break;
		case  1: return '1';break;
		case  2: return '2';break;
		case  3: return '3';break;
		case  4: return '4';break;
		case  5: return '5';break;
		case  6: return '6';break;
		case  7: return '7';break;
		case  8: return '8';break;
		case  9: return '9';break;
		case 10: return 'A';break;
		case 11: return 'B';break;
		case 12: return 'C';break;
		case 13: return 'D';break;
		case 14: return 'E';break;
		case 15: return 'F';break;
		default: return '*';break;
	}
}
