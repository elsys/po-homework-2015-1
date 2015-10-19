#include<stdio.h>

int main()
{
    int digits[10] = {0,0,0,0,0,0,0,0,0,0};
    int num, digit, i;

    scanf("%d", &num);
    
    while(num != 0)
    {
        digit = num % 10;
        digits[digit]++;
        num /= 10;
    }


    for(i = 0; i < 10; i++ )
    {
        if(digits[i] != 0)
        {
            printf("%d repeat %d times \n", i, digits[i]);
        }
    }
}
