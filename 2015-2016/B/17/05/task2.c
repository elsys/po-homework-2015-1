#include <stdio.h>

void next_generation (int *current, int *next, int length);
int main()
{
    int length, current[20], next[20], i;

    scanf ( "%d", &length ) ;
    for ( i=0;i<length;i++)
        scanf("%d",&current[i]);
        next_generation(current,next,length);
        return 0;

 }
 void next_generation (int *current, int *next, int length)
 {
     int i, k, j ;
         for(i=0;i<length;i++)
        {
            if(current [i]==0)
                printf(".");
            else if(current [i]==1)
                printf("*");
        }
        printf("\n");

    for(k=0;k<1000;k++)
    {

        for(i=0;i<20;i++)
            next[i]=0;
        for(i=1;i<length-1;i++)
        {
            if(i>1 || i<length-1)
            {
                if((current[i-1]==1&&current[i+1]==0)||
                (current[i-1]==0&&current[i+1]==1))
                    next[i]=1;
                if((current[i-1]==1&&current[i+1]==1)||
                (current[i-1]==0&&current[i+1]==0))
                    next[i]=0;
            }
        }
        for(i=0;i<length;i++)
        {
            if(next[i]==0)
                printf(".");
            else if(next[i]==1)
                printf("*");
        }
        printf("\n");

        for(i = 0,j = 0 ; i < length ; i++)
        {
          if( next [ i ] == 0)
            j++;
        }
        if( j == length)break;

        for(i=0;i<length;i++)
            current[i]=next[i];
    }

}
