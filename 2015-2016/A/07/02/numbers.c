#include <stdio.h>

int main()
{
    int num, i, numbers[10] = {0}, k = 0;
    scanf("%d", &num);

    while(num > 0)
    {
        k = num % 10;
        numbers[k]++;
        num = num / 10;
    }
    for(i=0; i < 10; i++)
    {
        if(num = 0)
        {
            numbers[0]++;
        }
        if(numbers[i] != 0)
        {
            printf("Number %d - %d times\n", i , numbers[i]);
        }
    }
    return 0;
}
