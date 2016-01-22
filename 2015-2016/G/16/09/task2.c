#include <stdio.h>
#include <stdlib.h>

int main()
{

    int binary[8];
    int p,n,v,i;
    int decimal = 0;
    int helper,counter;

    scanf("%d",&n);

    do{

        scanf("%d",&v);

    }while(v < 0 || v > 1);


    do{

        scanf("%d",&p);

    }while(p < 0 || p > 7);

    for(i = 0;n != 0;i++){

        binary[i] = n % 2;

        n /= 2;

    }
    counter = i;

    binary[p] = v;

    for(helper = 1, i = 0;helper <= 2;helper++,i++){

        decimal = helper * binary[i] + decimal;

    }

    for(helper = 4; i < counter ; helper *= 2,i++){

        decimal = helper * binary[i] + decimal;

    }
    printf("%d",decimal);

    return 0;
}

