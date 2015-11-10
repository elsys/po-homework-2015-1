#include <stdio.h>
#include <math.h>

int is_prime(int number)
{
    int something;
    for(something = 2; something <= sqrt(number); something++)
    {
        if(!(number % something)) return 0;
    }
}

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    if(is_prime(number)) printf("1\n");
    else printf("0\n");
    return 0;
}
