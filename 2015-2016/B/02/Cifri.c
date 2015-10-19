#include <stdio.h>

int main()
{
    int a,n[10],b=0,i=0;

while (b!=10){
    n[b]=0;
    b++;
}
 b=0;

    printf("Vavedi chislo:"); scanf("%d",&a);

    while(a!=0)
    {
       b=a%10;
       n[b]++;
       a=a/10;
    }
    b=0;

    while (b!=10){
 printf("\nBroy %d - %d",b,n[b]);
 b++;
    }
    return 0;
}

