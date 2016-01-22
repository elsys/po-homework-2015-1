#include <stdio.h>
#include <stdlib.h>

int main(){


    int a ,b,i;
    int binary[7];

    do{

        scanf("%d",&a);

    }while(a < 0 || a > 7);

     do{

        scanf("%d",&b);

    }while(a < 0 || a > 200);

    for(i = 0 ; b != 0 ; i++){

        binary[i] = b % 2;

        b /= 2;

    }
    printf("%d",binary[a - 1]);

    return 0;
}
