#include <stdio.h>

int main()
{
    int pommasiv[10];
    int i,chislo,a;
    printf("Vyvedete chislo:");scanf("%d",&chislo);
    for(i=0;i<=9;i++)
    {
        pommasiv[i] = 0;
    }
    for(i=0;i<=9;i++)
    {
        while(chislo!=0)
        {
            a=chislo%10;
            pommasiv[a]=pommasiv[a]+1;
            chislo=chislo/10;
        }
    }
    for(i=0;i<=9;i++){
        printf("%d %d\n",i,pommasiv[i]);
    }
return 0;
}
