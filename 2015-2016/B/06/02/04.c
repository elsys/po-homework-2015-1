#include <stdio.h>

int main()
{
    int i,a,b,c[10];
    for(a=0;a<10;a++)
    c[a]=0;
    printf("\n\n Add your number: \n");
    scanf("%d", &a);
    while(a>0)
    {
    b=a%10;
    for(i=0;i<10;i++)
    {
    if(b==i) c[i]++;
    }
    a=a/10;
    }
    for(b=0;b<10;b++)
    printf("\n%d - %d\n", b, c[b]);
    return 0;
}
