#include <stdio.h>

int main()
{
    int i;
    int digits[10] = {0};
    int number;
    scanf("%d",&number);

    if(number<0)
    {
        number *= -1;
    }
    while(number > 0)
    {
        int helper = number % 10;
        digits[helper]++;
        number /= 10;
    }

    for(i=0;i<10;i++)
    {
        if(digits[i]!=0)
        {
            printf("Cifrata %d se sadarja %d pati\n",i,digits[i]);
        }
    }
}
