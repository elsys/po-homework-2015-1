#include <stdio.h>

int main() 
{
    int a, b, bit;
    scanf("%d", &a);
    scanf("%d", &b);
    
    bit = (b >> a) & 1;
    printf("%d", bit);
    
    return 0;
}
