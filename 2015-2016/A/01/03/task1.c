#include <stdio.h>
int main()
{
int i,x,n,k=0;
printf("vuvedi visochinata n \n");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
for(x=1;x<=n-i;x++)
{
printf("  ");
}
do{
printf("+ ");
k++;
}
while(k!=2*i-1);
k=0;
printf("\n");
}
return 0;
}
