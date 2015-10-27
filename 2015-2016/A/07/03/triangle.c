#include <stdio.h>

int main()
{
    int n, i, j = 1, k = 0, p = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        p = n - i;
        while (p > 0)
        {
            printf(" ");
            p--;
        }
        while (k < j)
        {
            printf("$");
            k++;
        }
        k = 0;
        j = j + 2;
        printf("\n");
    }
    return 0;
}
