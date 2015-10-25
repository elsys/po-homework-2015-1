#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,l,z;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        l=n-i;
        for (z=0;z<n*2;z++)
        {
            if(z>=l && (n*2-1)-z>l)
                printf("I");
            else
            printf(" ");
        }
           printf("\n");
    }
}
