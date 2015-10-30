#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,p,l,k;
	
    printf("\n Enter height = ");
    scanf("%d",&n);

    printf("\n");

    for(i=1;i<=n;i++)
    {
	k=0;
        for(l=0;l<=n-i;l++)
        {
           printf(" ");
        }
        while(k!=2*i-1)
        {
           printf("1");
           k++;
        }
        printf("\n");
    }
    return 0;
}
