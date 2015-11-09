#include <stdio.h>

int main()
{
    int i,n,chislo[10]={0},a[20];
    printf("Vyvedete chislo:");scanf("%d",&n);
    while(n!=0)
    {
     chislo[n%10]=chislo[n%10]+1;
     n=n/10;
    }
    for(i=0;i<=9;i++)
    {
        if(chislo[i]>1)
        {
            printf("%d \n",i);
        }
    }
}
