#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, v, p, i = 0, remain, lenofbin, result = 0, j;
    int binary[100] = { 0 };

    scanf("%d", &n);
    do{
        scanf("%d", &v);
    }while(v != 0 && v != 1);
    do{
        scanf("%d", &p);
    }while(p < 0 && p > 7);

    remain = n;
    while (n > 0)
    {
        i++;
        n = n/2;
    }
    lenofbin = i;
    while(i > 0)
    {
        binary[i-1] = remain % 2;
        remain = remain/2;
        i--;
    }

    binary[lenofbin-p-1] = v;

    i = 1;
    for(j = lenofbin - 1; j >= 0; j--)
    {
        result = result + (binary[j]*i);
        i = i + i;
    }

    printf("%d", result);

    return 0;
}
