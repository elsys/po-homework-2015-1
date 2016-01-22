#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hex(char );
char dec(int);
int main()
{
char counting_system,color[7];
int red,green,blue;
char comma;
    scanf(" %c\n", &counting_system);

    switch(counting_system){
        case 'h':
            scanf("%[^\n]s", color);

            if(color[0]='#'){


            printf("rgb(%d, %d, %d)\n",hex(color[1])*16+hex(color[2]), hex(color[3])*16+hex(color[4]), hex(color[5])*16+hex(color[6]));
            break;
            }


     case 'd':

            scanf("%d" , &red);
            scanf("%c", &comma);
			scanf("%d", &green);
			scanf("%c", &comma);
			scanf("%d", &blue);
         	printf("#%c%c%c%c%c%c \n", dec(red/16), dec(red%16), dec(green/16), dec(green%16), dec(blue/16), dec(blue%16));
             break;
        default :
            printf("Error in the input");
            return 0 ;

    }

}
int hex(char s){
    switch(s){
        case '0' : return 0;break;
        case '1' : return 1;break;
        case '2' : return 2;break;
        case '3' : return 3;break;
        case '4' : return 4;break;
        case '5' : return 5;break;
        case '6' : return 6;break;
        case '7' : return 7;break;
        case '8' : return 8;break;
        case '9' : return 9;break;
        case 'a' : return 10;break;
        case 'b' : return 11;break;
        case 'c' : return 12;break;
        case 'd' : return 13;break;
        case 'e' : return 14;break;
        case 'f' : return 15;break;

    }
}
char dec(int d){
	switch(d){

		case  0: return '0'; break;
		case  1: return '1'; break;
		case  2: return '2'; break;
		case  3: return '3'; break;
		case  4: return '4'; break;
		case  5: return '5'; break;
		case  6: return '6'; break;
		case  7: return '7'; break;
		case  8: return '8'; break;
		case  9: return '9'; break;
		case 10: return 'a'; break;
		case 11: return 'b'; break;
		case 12: return 'c'; break;
		case 13: return 'd'; break;
		case 14: return 'e'; break;
		case 15: return 'f'; break;

	}

	return 0;

}

