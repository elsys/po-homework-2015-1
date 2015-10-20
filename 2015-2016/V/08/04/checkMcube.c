#include <stdio.h>

int main()
{
    int ll[100][100];

    int i=0,k=0,n;

    scanf("%d",&n);

    for(k=0;k<n;k++)
    for(i=0;i<n;i++)
        scanf("%1d",&ll[k][i]);




    for(k=0;k<n;k++){
            printf("\n");
        for(i=0;i<n;i++)
            printf(" %d",ll[k][i]);
    }
int sbor=0,sbor1=0,a=0;;
            printf("\n");

    for(k=0;k<n;k++)
    {
        sbor=sbor+ll[0][k];
    }//a++;puts("1");
    for(i=0;i<n;i++)
    {
        sbor1=0;
        for(k=0;k<n;k++)
        {
            sbor1=sbor1+ll[i][k];
        }
        if(sbor==sbor1){ a++;}
    }

    for(i=0;i<n;i++)
    {
        sbor1=0;
        for(k=0;k<n;k++)
        {
            sbor1=sbor1+ll[k][i];
        }
        if(sbor==sbor1){a++;}
    }
    sbor1=0;
    for(i=0;i<n;i++)
    {
        sbor1=sbor1+ll[i][i];
    }
       if(sbor==sbor1){a++;}

    sbor1=0;
    for(i=0;i<n;i++)
    {
        sbor1=sbor1+ll[i][n-i-1];
    }
     if(sbor==sbor1){a++;}

    if(a==n*2+2)puts("magick");
    else puts("NO");
    return 0;
}
