#include <stdio.h>
#include <stdlib.h>

int exact_square(int);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", exact_square(n));

    return 0;
}

int exact_square(int n)
{
    int i;
    if (n == 0 || n == 1)
        return 1;
    for(i = 2; i < n; i++)
    {
        if(i * i == n)
            return 1;
    }
    return 0;
}
