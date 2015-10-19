#include <stdio.h>
#include <string.h>
int main()
{
    int array[1000],n,c,d,swap;
    for(n=0;n<1000;n++)
    {
        printf("Vuvedi chislo:");
        scanf("%d",&c);
        if(c==42)
            break;
        else
            array[n]=c;
    }
    for(c=0;c<(n-1);c++)
    {
        for(d=0;d<n-c-1;d++)
        {
        if(array[d] > array[d+1])
        {
            swap       = array[d];
            array[d]   = array[d+1];
            array[d+1] = swap;
        }
        }
    }
    printf("Podreden list vuv vuzhodqsht red:\n");
    for(c=0;c<n;c++)
        printf("%d\n",array[c]);
    return 0;
    }
