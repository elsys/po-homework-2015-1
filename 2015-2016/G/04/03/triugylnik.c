#include<stdio.h>
int main ()
{
int i,z,n;
printf("vyvedete n=");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(z=0;z<n-i;z++)
{
printf(" ");
}
for(z=0;z<2*i-1;z++)
{
printf("o");
}
printf("\n");
}
return 0;
}
