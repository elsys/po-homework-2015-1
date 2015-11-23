#include <stdio.h>

int exact_square(int number)
{
    int something;
    for(something = 0; something <= number; something++)
    {
        if (number == something * something)
        {
            printf("1\n");
            return 0;
        }
    }
    printf("0\n");
}

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    exact_square(number);
    return 0;
}
