#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){

    int n,number,samechar;
    int rest, brsys, counter, counterb=0;
    char digit, result[8], hex[8]="",  palindrom='N';


   scanf("%d", &n);

    while(palindrom!='Y') {
    number=n+counterb;
    brsys=16;
    counter=0;
    while (number>0)
       {rest=number%brsys;
        switch(rest) {
        case 0: {digit='0';break;}
        case 1: {digit='1';break;}
        case 2: {digit='2';break;}
        case 3: {digit='3';break;}
        case 4: {digit='4';break;}
        case 5: {digit='5';break;}
        case 6: {digit='6';break;}
        case 7: {digit='7';break;}
        case 8: {digit='8';break;}
        case 9: {digit='9';break;}
        case 10: {digit='A';break;}
        case 11: {digit='B';break;}
        case 12: {digit='C';break;}
        case 13: {digit='D';break;}
        case 14: {digit='E';break;}
        case 15: {digit='F';break;}
    }
        number=number/brsys;
        result[counter]=digit;

        counter++;

       }
        result[counter]='\0';
       samechar=0;


    for(counter=0;counter<strlen(result);counter++) {
        hex[counter]=result[strlen(result)-1-counter];
        if (result[counter]!=result[strlen(result)-1-counter]) {
            samechar=1;
        }
    }
    hex[counter]='\0';


    if (samechar==0) {
        printf("%s",hex);
        palindrom='Y' ;
    }
    else {
        counterb++;

    }

   }


return 0;
}
    
    newn = newn + result[7];

    printf("%d \n",newn);

return 0;
}
