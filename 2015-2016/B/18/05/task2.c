#include <stdio.h>

void next_generation(int *current, int *next, int length);

int main()
{
    int current[23];
    int next[23];
    int length;
    int index = 0;
    
    for (index = 0; index < 23; index++)
    {
        current[index] = next[index] = 0;
    }
    
    do
    {
        scanf("%d", &length);
    }while (length < 0 || length > 20);
    
    for (index = 0; index < length; index++)
    {
        scanf("%d", &current[index]);
    }
    
    next_generation(current, next, length);
    
    return 0;
}

void next_generation(int *current, int *next, int length)
{
    int index = 0;
    int alive = 0;
    int generations = 0;
    
    do
    {
        alive = 0;
        
        for (index = 0; index < length; index++)
        {
            if ( *(current + index) == 1)
            {
                alive++;
            }
        }
        
        for (index = 1; index < length - 1; index++)
        {
            if ( *(current + index + 1) != *(current + index - 1))
            {
                *(next + index) = 1;
            }
            
            else
            {
                *(next + index) = 0;
            }
        }    
        
        for (index = 0; index < length; index++)
        {
            if ( *(current + index) == 1)
            {
               printf(" *");
            }
        
            else
            {
               printf(" .");
            }
            
        }   
        
        printf("\n");
        
        generations++;
        
        if (alive <= 2 && generations > 3)
        {
            for (index = 0; index < length; index++)
            {
                printf(" .");  
            }  
            return;
        }
        
        for (index = 0; index < length; index++)
        {
            *(current + index) = *(next + index);
        }
        
    }while (alive > 0 && generations < 1000);
}
