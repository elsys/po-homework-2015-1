#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,k;
    int cifri[10] = {0};
    printf("vuvedi chislo");
    scanf("%d",&n);

    while(n>0){

        k=n%10;

        cifri[k]++;

        n=n/10;

    }

 for(i=0;i<=10;i++)
    if(cifri[i]>1)
    printf("cifrata %d se povtarq\n",i);

 return 0;
}


