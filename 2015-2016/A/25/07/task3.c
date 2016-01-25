#include <stdio.h>
#include <string.h>

int check_if_palindrome(int);

int main(){
    int input;
    scanf("%d",&input);

    while(check_if_palindrome(input) != 0){
        input++;
    }
    printf("%X",input);

return 0;
}

int check_if_palindrome(int input){
    int i = 0, k, decimal, length;
    char tempchar, hex[123];

    decimal = input;

    while(decimal != 0){

        if( (decimal % 16) < 10)
            tempchar = (decimal % 16) + '0';

        else
            tempchar = (decimal % 16) + 55;

            hex[i] = tempchar;
            decimal = decimal / 16;
            i++;
    }
    hex[i]= 0;
    length = strlen(hex);

    for(i = 0, k = length - 1; i < (length) / 2; i++, k--){
        if(hex[i] != hex[k]){
            return 1;
        }
    }

    return 0;
}
