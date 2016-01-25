#include <stdio.h>


int prime(int number)
{
    if(number < 0)
        return -1;
    int i = 2;
    for(; i <= number-1; i++)
    {
        if(number%i == 0)
            return 0;
    }
    return 1;
}


int main()
{
    int number;
    scanf("%d",&number);
    printf("%d",prime(number));
    return 0;
}