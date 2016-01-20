#include <stdio.h>
#define NUM 1000
void sorting(int *sort);

int main()
{
    int sort[NUM] = { 0 };
    register int k=0, l=0;

    for( k = 0; (k==0) ? sort[k]!=42 : sort[k-1]!=42 && k < NUM ; k++ )
    {
            scanf("%d", &sort[k]);
    }

    sorting(sort);

    for( l = k; l > 0 ; l-- )
    {
        printf("%d ",sort[l]);
    }
    return 0;
}

void sorting(int *sort)
{
    register int i=0, j=0, swap;

    for (i = 0 ; i < ( NUM - 1 ) ; i++)
    {
        for (j = 0 ; j < ( NUM - i - 1 ) ; j++)
        {
            if (sort[j] < sort[j+1])
            {
            swap      = sort[j];
            sort[j]   = sort[j+1];
            sort[j+1] = swap;
            }
        }
    }
}
