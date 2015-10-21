#include <stdio.h> 

int main()
{
  int a[10],i,n;

scanf("%d",&n);

for(i=0;i<10;i++)
{a[i]=0;}

while(n%10>0)
{i=n%10;
a[i]++;
n=n/10;}

for(i=0;i<10;i++)
{if(a[i]>0) printf("%d %d\n",i,a[i]);}

return 0;
  

}
