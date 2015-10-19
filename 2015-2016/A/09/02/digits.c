#include <stdio.h>
#define maxLength 10

int main()
{
    int number, i, digits[maxLength] = { 0 };
    scanf("%d", &number);

    if (number == 0)
        digits[0]++;

    while (number > 0)
    {
        digits[number % 10]++;
        number /= 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (digits[i] != 0)
        {
            digits[i] > 1 ? printf("Digit %d --> %d times\n", i, digits[i]) : printf("Digit %d --> %d time\n", i, 1);
        }
    }

    return 0;
}
