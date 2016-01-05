
#include <stdio.h>
#include <stdlib.h>

int main()
{   char c='*';
    int n,i,k,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {for(j=n-i;j>0;j--)
        printf(" ");
    for(k=n-i;k<n;k++)
    {if(k==n-1)
        printf("%c",c);
    else
        printf("%c%c",c,c);
    }
        printf("\n");

    }
    return 0;
}
