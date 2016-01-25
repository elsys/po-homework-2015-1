#include <stdio.h>

int main(){
    int n, v, p, temp;

    scanf("%d", &n);

    scanf("%d", &v);
    if(v < 0 && v > 1)
        return -1;

    scanf("%d", &p);
    if(p < 0 && p > 7)
        return -1;

    temp = 1 << p;

    if(v == 1)
        n = n | temp;

    else
        n = n & ~temp;

    printf("%d", n);

    return 0;
}
