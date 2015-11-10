#include<stdio.h>

int exact_square(int);

int main()
{
    int number;

    scanf("%d", &number);

    printf("%d", exact_square(number));

    return 0;
}

int exact_square(int number)
{
    int i;

	for(i = 0; i < number; i++)
    {
        if(i*i == number) return 1;
    }

	return 0;
}
