#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, reindeers, k, sum;
    int n[200];

    do{
        scanf("%d", &reindeers);
    }while(reindeers > 200 || reindeers % 2 == 0);

    for(i = 0; i < reindeers; i++)
    {
        do{
            scanf("%d", &n[i]);
        }while(n[i] > 100);
    }

    for(i = 0; i < reindeers; i++)
    {

        for(k = 0;k < reindeers; k++)
        {
            sum = 1;
            if(n[i] == n[k] && i != k)
            {
                sum++;
            }
            if(sum == 2)
                break;
        }
        if(sum == 1)
        {
            printf("%d", n[i]);
            break;
        }
    }
    return 0;
}
