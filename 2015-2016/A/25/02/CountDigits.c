#include <stdio.h>
int main()
{
    int n, i;
    int d[10]={0};
    printf("Enter a number:\n");
    scanf("%d",&n);
    if(n==0)
        d[0]++;
    while(n>0)
    {
        d[n%10]++;
        n=n/10;
    }
    for(i=0;i<10;i++)
    {
        if(d[i]!=0)
        {
           printf("\nDigit %d = %d times",i,d[i]);
        }
    }
    return 0;
}
