#include<stdio.h>
int exact_square (int);
int main()
{
    int chislo;
    printf("Vuvedi chislo:");
    scanf("%d",&chislo);
    printf("%d",exact_square(chislo));
    return 0;
}
int exact_square(int chislo)
{
    int i=0;
     while(i<=chislo)
    {
        if(chislo==i*i)
        {
            return 1;
        }
        i++;
    }
    return 0;
}
