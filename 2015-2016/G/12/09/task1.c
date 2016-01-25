w#include <stdio.h>

void dec_to_bin(int [], int);

int main()
{
    int a, b;
    int binary[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    do{

        scanf("%d", &a);

    }while(a < 0 || a > 7);
    do{

        scanf("%d", &b);

    }while(a < 0 || a > 200);

    dec_to_bin(binary, b);
    printf("%d", binary[7-a]);

return 0;
}

void dec_to_bin(int binary[8], int dec){

    int counter = 7;
    for(;dec != 0;counter--){

        binary[counter] = dec % 2;
        dec = dec / 2;

    }

}
