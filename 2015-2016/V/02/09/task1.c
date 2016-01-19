#include <stdio.h>

int main()
{
    int num;
    int i;
    int n;
    int buffer[100];
    scanf("%d",&i);
    scanf("%d", &num);

    for(n = 0; n < 100; n++)
    {
        buffer[n] = 0;
    }

    n = 0;

    while(num>0)
    {
        buffer[n] = num%2;
        num = num/2;
        n++;
    }

    printf("\n%d", buffer[i]);
}
