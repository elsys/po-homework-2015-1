#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int a=0,b=0,number,rest, brsys, counter;
    char digit, result[8]="00000000";
    scanf("%d", &a);
    scanf("%d", &b);
    if ((a<0||a>7)||(b<0||b>200)){
        printf("%s","Wrong range of a or b. Exit");
        return 0;
    }


    number=b;
    brsys=2;
    counter=1;
    while (number>0)
       {rest=number%brsys;
        if (rest==0) {
        digit='0';
    }
        else {
        digit='1';
    }
        number=number/brsys;
        result[8-counter]=digit;
    counter++;
       }

    printf("%c",result[7-a]);

return 0;
}
