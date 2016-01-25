#include <stdio.h>

int main() {

    int a, b, output;

    do{
        scanf("%d", &a);
    }while(a < 0 || a > 7);

    do{
        scanf("%d", &b);
    }while(b < 0 || b > 100);

    output = (b >> a) & 1;
    printf("%d \n", output);

    return 0;
}