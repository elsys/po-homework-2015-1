#include <stdio.h>

int main() 
{
    int num, v, p;
    
    scanf("%d", &num);
    scanf("%d", &v);
    scanf("%d", &p);
    
    if (v == 0) 
    {
        num = ~(1 << p) & num;
    } 
    else 
    {
        num = (v << p) | num;
    }
    
    printf("%d", num);
    return 0;
}
