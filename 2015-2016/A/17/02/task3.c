#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int string[1000];
    int p,d,j=0,x;


    for(x = 0;; x++,j++)
    {
        scanf("%d",&string[x]);
        if(string[x] == 42)
        {
            break;
        }
    }

            for(x = 0;x <(j-1); x++)
            {
                for(p = 0;p <j-1-x; p++)
                {
                    if(string[p] > string[p+1])
                    {
                        d=string[p];
                        string[p]=string[p+1];
                        string[p+1]=d;
                    }
                }
            }

    for(x=0 ;x < j; x++)
    {
        printf("\n%d",string[x]);
    }
    return 0;
}
