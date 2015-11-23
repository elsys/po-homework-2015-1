#include <stdio.h>
#include <stdlib.h>

void next_generation(int *current, int *next, int length);
int main()
{
    int next[20] , current [20] , counter , length;

    for (counter = 0; counter < 20; counter++)
       {
        current[counter] = next[counter] = 0;
       }
            while(length > 20 || length < 1)
            {
            scanf("%d", &length);
            }
    for(counter = 0; counter < length; counter++)
    {
        scanf("%d", &current[counter]);
    }

    next_generation(current, next, length);
return 0;
}

void next_generation (int *current, int *next, int length)
{
    int counter, live , generations = 0;
    do
    {
        live = 0;
        for(counter = 0; counter < length; counter++)
        {
            if (current[counter] == 1)
            {
                live++;
            }
        }

        for(counter = 1; counter < length - 1; counter++)
        {
           if(current[counter + 1] != current[counter - 1])
            {
                next[counter] = 1;
            }
           else
                {
                    next[counter] = 0;
                }
        }

        for(counter = 0; counter < length; counter++)
        {
            if(current[counter] == 1)
             {
               printf("*");
             }
            else
                {
               printf(".");
                }
        }
        printf("\n");

    generations++;

        if(live <= 2 && generations > 3)
        {
            for(counter = 0; counter < length; counter++)
            {
                printf(".");
            }
        }

        for(counter = 0; counter < length; counter++)
        {
            current[counter] = next[counter];
        }

    }while(live > 0 && generations <= 1000);

}
