#include <stdio.h>
#include <string.h>
char hexadecimal(int);

int main()
{
  int num,num2, count, count2, c;
	char hex[16];
	scanf("%d", &num);
 	
 	do
 	{
         for(count = 0, numb2 = num; num2 != 0; count++)
            {
             hex[count] = hexadecimal(num2%16);
             num2 /= 16;
            }
         hex[count] = '\0';
         for(count = 0, count2 = strlen(hex) - 1, c = 1; count < (strlen(hex) - 1); count++, count2--)
          {
             if(hex[count] != hex[count2])
              {
 				        c = 0;
 				        num++;
              }
          }
 }while(!c);
 	printf("%s \n", hex);
 	return 0;
}
 char hexadecimal(int decimal)
 switch(decimal)
{
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
