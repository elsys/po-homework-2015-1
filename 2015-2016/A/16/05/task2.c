#include <stdio.h>
#include <stdlib.h>
void next_generation(int *current, int *next, int length);

int main(void)
{
    int old_cells[20];
    int new_cells[20];
    int limiter;
    int counter;
    scanf("%d", &limiter);
    counter = 0;
    while(counter != limiter)
    {
        scanf("%d", &old_cells[counter]);
        /*if(old_cells[counter]!=1 || old_cells[counter]!=0)
        {
            return -1;
        }*/
        new_cells[counter] = old_cells[counter];
        counter++;
    }
    old_cells[0]       = 0;
    old_cells[counter] = 0;
    new_cells[0]       = 0;
    new_cells[counter] = 0;

    int generation_counter = 0;
    int deadflag = 1;
    while(generation_counter!=1000)
    {
        counter = 0;
        while(counter!=limiter)
        {
            if(old_cells[counter]==0)
            {
                printf(".");
            }
            if(old_cells[counter]==1)
            {
                printf("*");
                deadflag = 0;
            }
            counter++;
        }
        printf("\n");
        next_generation(old_cells, new_cells, limiter);
        generation_counter++;
        if(deadflag==1)
        {
            return;
        }
        deadflag = 1;
    }
}

void next_generation(int *current, int *next, int length)
{
    int counter2 = 0;
    while(counter2<length)
    {
        if(current[counter2]==current[counter2+2])
        {
            next[counter2+1] = 0;
        }
        else
        {
            next[counter2+1] = 1;
        }
        counter2++;
    }
    next[0] = 0;
    next[length-1] = 0;
    counter2 = 0;
    while(counter2!=length)
    {
        current[counter2] = next[counter2];
        counter2++;
    }
}
