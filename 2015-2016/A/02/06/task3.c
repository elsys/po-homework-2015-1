#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m[200],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&m[i]);

        for(i=0;i<n-1;i++)
           {
                for(j=0;j<n;j++)
                if(j!=i)
                    if(m[i]==m[j])
                    break;

                if(n==j)
                {
                  printf("%d",i);
                  return 0;
                }

           }
printf("%d",i++);
    return 0;
}
