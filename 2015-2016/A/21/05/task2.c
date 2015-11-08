#include <stdio.h>

void next_generation(int *current, int *next, int length);

int main()
{
    int current[20], next[20], count, length;
    
    for (count = 0; count < 20; count++)
    {
        current[count] = next[count] = 0;
    }
    do
    {
        scanf("%d", &length);

    }while(length < 0 || length > 20);

    for(count = 0; count < length; count++)
    {
        scanf("%d", &current[count]);
    }
    
    next_generation(current, next, length);
    
    return 0;
}

void next_generation(int *current, int *next, int length)
{
    int count, alive, generations = 0;
    
    do
    {
        alive = 0;
        for(count = 0; count < length; count++)
        {
            if (*(current + count) == 1)
            {
                alive++;
            }
        }
        for(count = 1; count < length - 1; count++)
        {
            if(*(current + count + 1) != *(current + count - 1))
            {
                *(next + count) = 1;
            }
            else
            {
                *(next + count) = 0;
            }
        }    
        for(count = 0; count < length; count++)
        {
            if(*(current + count) == 1)
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

        if(alive <= 2 && generations > 3)
        {
			count = 0;
            for(; count < length; count++)
            {
                printf(".");  
            }  
            return;
        }

		count = 0;

        for(; count < length; count++)
        {
            *(current + count) = *(next + count);
        }

    }while(alive > 0 && generations <= 1000);
}
