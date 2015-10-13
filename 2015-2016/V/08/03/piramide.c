#include <stdio.h>

int main()
{

int n;
scanf("%d",&n);

int i;
int j,k,l;
l=n-1;
for(i=0;i<n;i++)
{
    for(j=0;j<2*n-i;j++)
        printf(" ");

  for(k=0;k<2*n-l*2-1;k++)
    {
        printf("#");

    }
            printf("\n");
l--;


}

}
