#include <stdio.h>


void next_generation(int *current, int *next, int lenght);
void copy_array(int *copy, int *result, int lenght);
void print(int *cells, int lenght);
int alive(int *arr, int lenght);

int main()
{
    int n, i, count = 0, is_alive;


    scanf("%d", &n);
    int current[n], next[n];
    for( i = 0; i < n; i++)
    {
        scanf("%d", &current[i]);
    }

    do
    {
        print(current, n);
        next_generation(current, next, n);

        printf("\n");
        copy_array(next, current, n);
        count++;
        is_alive = alive(next, n);
    }while(count < 1000 && is_alive == 1);

   print(current, n);

   return 0;
}

void next_generation(int *current, int *next, int lenght)
{
    int i;
    next[0] = 0;
    next[lenght-1] = 0;
    for(i = 1; i < lenght-1; i++)
    {
        if(current[i-1] == current[i+1])
        {
            next[i] = 0;
        }
        else
        {
            next[i] = 1;
        }
    }
}

void print(int *cells, int lenght)
{
     int i;
    for(i = 0; i < lenght; i++)
    {
        if(cells[i] == 0)
        {
            printf(".");
        }
        else
        {
            printf("*");
        }
    }
}
void copy_array(int *copy, int *result, int lenght)
{
    int i;

    for(i = 0; i < lenght; i++)
    {
        result[i] = copy[i];
    }
}
int alive(int *arr, int lenght)
{
    int i;
    for(i = 0; i < lenght; i++)
    {
        if(arr[i] == 1)
        {
            return 1;
        }
    }
    return 0;
}

