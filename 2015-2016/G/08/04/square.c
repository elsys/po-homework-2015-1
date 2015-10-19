#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,k;
    int cifri[9] = {0};
    printf("vuvedi chislo");
    scanf("%d",&n);

    while(n>0){

        k=n%10;

        cifri[k]++;

        n=n/10;

    }

 for(i=1;i<=9;i++)
    if(cifri[i]>1)
    printf("cifrata %d se sreshta %d puti \n",i , cifri[i]);

 return 0;
}
