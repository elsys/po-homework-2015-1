#include <stdio.h>
#include <string.h>

int is_it_palindrome(int ,char []);
char dec_to_hex(int );

int main()
{
int num;
char num_hex[16];

    scanf("%d",&num);

        while(is_it_palindrome(num, num_hex) != 1){

            num++;

        }
    printf("%s", num_hex);

return 0;
}

int is_it_palindrome(int num, char num_hex[16]){

int counter_1 = 0, counter_2 = 0;

            while(num != 0){

                num_hex[counter_1] = dec_to_hex(num % 16);
                num = num / 16;
                counter_1++;

            }
        num_hex[counter_1] = '\0';

        for(counter_1 = 0, counter_2 = strlen(num_hex) - 1; counter_1 < (strlen(num_hex) - 1); counter_1++, counter_2--){

            if(num_hex[counter_1] != num_hex[counter_2]){

                return 0;

            }

        }

return 1;
}
char dec_to_hex(int num){


    switch(num){


        case 0: return '0'; break;
        case 1: return '1'; break;
        case 2: return '2'; break;
        case 3: return '3'; break;
        case 4: return '4'; break;
        case 5: return '5'; break;
        case 6: return '6'; break;
        case 7: return '7'; break;
        case 8: return '8'; break;
        case 9: return '9'; break;
        case 10: return 'A' ;break;
        case 11: return 'B' ;break;
        case 12: return 'C' ;break;
        case 13: return 'D' ;break;
        case 14: return 'E' ;break;
        case 15: return 'F' ;break;
        default: return '-' ;break;

    }


}
