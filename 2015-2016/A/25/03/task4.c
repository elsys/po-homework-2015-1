#include <stdio.h>
#include <string.h>

int main(){
    int i,length,amount=0;
    char roman[8];

    scanf("%s",roman);

    length=strlen(roman);

    for(i=0;i<length;i++){
        if(roman[i] == 'I' && (roman[i+1] == 'V' || roman[i+1] == 'X' || roman[i+1] == 'L' || roman[i+1] == 'C')){
            if(roman[i+1] == 'V'){
                amount += 4;
                i += 2;
            }

            if(roman[i+1] == 'X'){
                amount += 9;
                i += 2;
            }

            if(roman[i+1] == 'L'){
                amount += 49;
                i += 2;
            }

            if(roman[i+1] == 'C'){
                amount += 99;
                i += 2;
            }
        }

        if(roman[i] == 'X' && (roman[i+1] == 'L' || roman[i+1] == 'C')){
            if(roman[i+1] == 'L'){
                amount += 40;
                i += 2;
            }

            if(roman[i+1] == 'C'){
                amount += 90;
                i += 2;
            }
        }

        if(roman[i] == 'C')
           amount += 100;

        if(roman[i] == 'L')
           amount += 50;

        if(roman[i] == 'X')
            amount += 10;

        if(roman[i] == 'V')
            amount += 5;

        if(roman[i] == 'I')
            amount++;
    }

    if(amount>256)
        printf("The number is too big\n");
    else
        printf("%d",amount);

    return 0;
}
