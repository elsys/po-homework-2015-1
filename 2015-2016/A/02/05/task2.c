#include <stdio.h>
#include <stdlib.h>
void next_generation(int *current, int *next, int length);
int main()
{
    int i,j,k=0,length,current[20],next[20];
    scanf("%d",&length);
    for(i=0;i<length;i++)
        scanf("%d", &current[i]);
        next[0]=0;
        next[length-1]=0;
    for(i=0;i<1000;i++)
        {
            for(j=0;j<length;j++)
                k=k+current[j];
            next_generation(current,next,length);
            if(k==0)
                break;
            k=0;
        }

    return 0;
}
void next_generation(int *current, int *next, int length)
{   int i;
    printf("\n");
    for(i=0;i<length;i++)
    {   if(current[i]==0)
            printf(".");
        else
            printf("*");

    }
    for(i=1;i<length-1;i++)
    {   if(current[i-1]==current[i+1])
            next[i]=0;
        else
            next[i]=1;

    }
    for(i=0;i<length;i++)
        current[i]=next[i];



}
