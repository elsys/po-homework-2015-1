#include <stdio.h>
#include <stdlib.h>

void next_generation(int *current, int *next, int length);

int main()
{
    int i, j, sum;
    int n,current[20], next[20];

    do{
        scanf("%d", &n);
    }while(n < 0 && n > 20);

    for(i=0;i<n;i++)
        scanf(" %d", &current[i]);

    next[0]=0;
    next[n-1]=0;

    for(i = 0;i < 1000; i++)
    {
        sum = 0;

        for(j = 0;j < n; j++)
        {
            if(current[j] == 0)
                sum++;
        }

        next_generation(current, next, n);

        if(sum == n)
        {
            break;
        }
    }

    return 0;
}

void next_generation(int *current, int *next, int length)
{
    int i;

    for(i = 0; i < length; i++)
    {
        if(current[i] == 1)
            printf("*");
        else
            printf(".");
    }
    for(i = 1; i < length - 1; i++)
    {
        if(current[i-1] == 1 && current[i+1] == 0)
            next[i] = 1;
        else if(current[i-1] == 0 && current[i+1] == 1)
            next[i] = 1;
        else
            next[i] = 0;
    }

    for(i=0;i<length;i++)
    {
        current[i]=next[i];
    }
}
