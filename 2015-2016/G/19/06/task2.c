#include <stdio.h>
#include <string.h>
int exact_square(int n);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", exact_square(n));
    return 0;
}

int exact_square(int n)
{

    int a;
    for(a = 0; a <= n/2; a++)
    {
        if (n == a * a)
        {
            return 1;
        }
    }

    return 0;
}
