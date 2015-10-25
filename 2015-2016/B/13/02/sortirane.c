#include<stdio.h>

int main()
{
    int a[1000],i,min,b,j,broj;

for(i=0;i<1000; i++)
{ scanf("%d", &a[i]);
  if(a[i]==42) break; }
 broj=i;

 for(i=0;i<broj;i++)
{ min=i;
  for(j=i+1;j<broj;j++)
{if (a[min]>a[j])  min=j;}

b=a[min];
a[min]=a[i];
a[i]=b;
}

for(i=0;i<broj;i++)
  {printf("%d\n", a[i]);}

return 0;

}

	
