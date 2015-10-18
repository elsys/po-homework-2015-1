#include <stdio.h>
#include <stdlib.h>
#define maxLength 1000

int main()
{
    int numbers[maxLength], i = 0, j = 0, sorted = 0, length;

    for (; numbers[i - 1] != 42; i++)
    {
        scanf("%d", &numbers[i]);
    }

    length = i;

    while (!sorted)
    {
        j++;
        sorted = 1;
        for (i = 0; i < length - j; i++)
        {
            if (numbers[i] > numbers[i + 1])
            {
                numbers[i] = numbers[i] + numbers[i + 1];
                numbers[i + 1] = numbers[i] - numbers[i + 1];
                numbers[i] = numbers[i] - numbers[i + 1];
                sorted = 0;
            }
        }
    }


    for (i = 0; i < length; i++)
        printf("%d\n", numbers[i]);

    return 0;
}
