#include <stdio.h>

int main()
{
    int deer[200];
    int i,k;
    int size,veracious;

    for(i=0;i<200;i++)
    {
        deer[i]=0;
    }
    scanf("%d", &size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&deer[i]);
    }

    for(i=0;i<size;i++)
    {
        veracious=0;
        for(k=0;k<size;k++)
        {
            if(deer[i]==deer[k])
                if(i!=k)
                {
                    veracious=1;
                }
        }
        if(veracious==0)
        {
            printf("%d",deer[i]);
        }
    }
    return 0;
}