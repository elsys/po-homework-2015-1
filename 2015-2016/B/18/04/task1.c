#include <stdio.h>

int is_prime(int);


int main()
{
    int number = 0;
    int counter = 0;
    int error = 0;

    if(scanf("%d", &number) != 1)
    {
        error = 1;
    }

    is_prime(number);
    counter = is_prime(number);

    if(number / counter == 1 && error == 0)
    {
        printf("1\n");
    }

    else
    {
        if(error == 1)
        {
            printf("-1\n");
        }

        else
        {
            printf("0\n");
        }
    }

    return 0;
}

int is_prime(int number)
{
    int counter = 2;

    while(number % counter != 0)
    {
        counter++;
    }

    return counter;

}
