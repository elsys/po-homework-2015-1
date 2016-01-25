#include <stdio.h>

void dec_to_bin(int [], int);
int bin_to_dec(int []);

int main()
{
    int n, v, p;
    int binary[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    scanf("%d",&n);
    do{

        scanf("%d",&v);

    }while(v < 0 || v > 1);
    do{

        scanf("%d",&p);

    }while(v < 0 || v > 7);

    dec_to_bin(binary, n);

    binary[7 - p] = v;

    printf("%d",bin_to_dec(binary));


return 0;
}

void dec_to_bin(int binary[8], int dec){

    int counter = 7;
    for(;dec != 0; counter--){

        binary[counter] = dec % 2;
        dec = dec / 2;

    }


}
int bin_to_dec(int binary[8]){

    int counter = 1;
    int dec;
    dec = binary[0]*2;
    for(;counter < 7; counter++){

        dec = (dec + binary[counter])*2;

    }
        dec = dec + binary[7];

    return dec;
}
