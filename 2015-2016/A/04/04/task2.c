#include <stdio.h>
#include <stdlib.h>

int exact_square(int);

int exact_square(int n)
{
    int i;

    for(i=0;i<=n;i++)
    {
        if(i*i == n)
        return 1;
    }

    return 0;

}

int main()
{
    int n;

    scanf("%d",&n);

    printf("%d", exact_square(n));

    return 0;

}

