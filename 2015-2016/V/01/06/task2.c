#include <stdio.h>
#include <stdlib.h>

int exact_square(int number);

int main()
{
    int number;
    scanf("%d",&number);
    printf("%d",exact_square(number));
    return 0;
}
int exact_square(int number)
{
    int i=0;
    while(number>i)
    {
        if(i*i==number)
        {
            return 1;
        }
        i++;
    }
    return 0;
}
