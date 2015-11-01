#include <stdio.h>
int main()
{
int n,i,k,b;
int a[10];
printf("Vuvedete chislo:");
scanf("%d",&n);
for(i=0;n>0;i++)
{
a[i]=n%10;
n=n/10;
}
k=i;
for(i=0;i<k;i++)
for(b=i+1;b<k;b++)
{
if(a[i]==a[b])
{
printf("Chisloto %d se povtarq!\n", a[i]);
}
}	
return 0;
}

