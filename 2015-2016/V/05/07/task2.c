#include <stdio.h>

void next_generation(int *current, int *next, int length)
{
    int i;
    for(i = 1;i < length - 1; i++)
    {
        int number = 0;
        if(current[i - 1] == 1)
        {
            number++;
        }
        if(current[i + 1] == 1)
        {
            number++;
        }
        if(number == 1)
        {
            next[i] = 1;
        }
    }
}
int main()
{
    int current[21];
    int next[21];
    int length;
    scanf("%d",&length);
    int i,  i1, i2, i3, i4;
    for( i = 0 ;i < length;i++)
    {
        scanf("%d",&current[i]);
    }
    for( i3 = 0;i3 < length; i3++)
    {
        if(current[i3] == 1)
        {
            printf("*");
        }
        else
        {
            printf(".");
        }
    }
    printf("\n");
    for( i = 0; i < 1000; i++){
        next_generation(current,next,length);
        for( i1 = 0 ; i1 < length; i1++)
        {
            current[i1]= next[i1];
            next[i1] = 0;
        }
        for( i3 = 0  ; i3 < length; i3++)
        {
            if(current[i3] == 1)
            {
                printf("*");
            }
            else
            {
                printf(".");
            }
        }
            printf("\n");
        int number = 0;
        for(i4 = 0; i4 < length; i4++)
        {
            if(current[i4] == 1)
            {
                number++;
            }
        }
        if(number == 0)
        {
            break;
        }
    }
}
