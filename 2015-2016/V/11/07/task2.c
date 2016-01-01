#include <stdio.h>

void next_generation(int *current, int *next, int length)
{
    int i;
    for(i=1;i<length-1;i++)
    {
        int number=0;
        if(current[i-1]==1)
        {
            number++;
        }
        if(current[i+1]==1)
        {
            number++;
        }
        if(number== 1 )
        {
            next[i]=1;
        }
    }
}
int main()
{
    int current[21];
    int next[21];
    int length;
    scanf("%d",&length);
    int i,j,i1,j1;
    for( i=0;i<length;i++)
    {
        scanf("%d",&current[i]);
    }
    for(i1=0;i1<length;i1++)
    {
        if(current[i1]==1)
        {
            printf("* ");
        }
        else
        {
            printf(". ");
        }
    }
    printf("\n");
    for(i=0;i<1000;i++){
        next_generation(current,next,length);
        for(j=0;j<length;j++)
        {
            current[j]=next[j];
            next[j]=0;
        }
        for(i1=0;i1<length;i1++)
        {
            if(current[i1]==1)
            {
                printf("* ");
            }
            else
            {
                printf(". ");
            }
        }
            printf("\n");
        int number=0;
        for(j1=0;j1<length;j1++)
        {
            if(current[j1]==1)
            {
                number++;
            }
        }
        if(number==0)
        {
            break;
        }
    }
}
