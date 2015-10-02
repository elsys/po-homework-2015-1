#include<stdio.h>
void main()
{
int n,i,a;
printf("n="); scanf("%d",&n);
printf("a="); scanf("%d",&a);
i=0;
while(n>0)
{
if(n%10==a)
i++;
n=n/10;
}
printf("i=%d",i);
}
