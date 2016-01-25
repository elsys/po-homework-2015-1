#include<stdio.h>
#define CHECK_BIT(var,pos) (((var)>>(pos)) & 1)
int main(){
    int a, b;
    do {
        scanf("%d %d", &a, &b);
    } while((0 > a) || (a > 7) || (0 > b) || (b > 200));

    printf("%d", CHECK_BIT(b, a));

    return 0;
}
