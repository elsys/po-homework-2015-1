#include <stdio.h>
#include <stdlib.h>

int is_prime(int num);

int main()
{
    int result, j, k, num=0;
    char c[10];
    scanf("%s", c);
    j = strlen(c);

    for(k=0; k < j; k++)
    {
        if(c[k]<48 || c[k]>57)
        {
            printf("\n-1");
            return 0;
        }

    }
    num = atoi(c);
    result = is_prime(num);

    printf("%d", result);
    return 0;
}

int is_prime(int num)
{
    int i, root;
    root = sqrt(num);

    if(num == 1 || num == 0)
    {
        return 0;
    }

    for(i = 2; i<=root; i++)
    {
        if(num%i == 0)
        {
            return 0;
        }
    }

    return 1;

}
