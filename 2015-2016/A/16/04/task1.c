#include <stdio.h>
#include <stdlib.h>
void is_prime(int x, int flag);

int main(void)
{
    int x, flag;
    flag = 0;
    printf("Is your number less than 0? If yes - input 1; If no - input any other number: ");
    if(scanf("%d", &flag) != 1)
    {
        printf("-1");
        return;
    }
    printf("\nInsert your number - ");
    if(scanf("%d", &x) != 1)
    {
        printf("-1");
        return;
    }
    is_prime(x, flag);
}
void is_prime(int x, int flag)
{
    int y, c;
    if(x==1||x==-1)
    {
        printf("\n1");
        return;
    }
    y = 2;
    if(flag==1)
    {
        x = -x;
        y = -2;
    }
    c = 0;
    if(flag==1)
        {
            while(y>x)
            {
                c = x % y;
                if(c==0)
                {
                    printf("\n0");
                    return;
                }
                y--;
            }
        }
    if(flag!=1)
        {
            while(y<x)
            {
                c = x % y;
                if(c==0)
                {
                    printf("\n0");
                    return;
                }
                y++;
            }
        }
    printf("\n1");
}
