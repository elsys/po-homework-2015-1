#include <stdio.h>
#define max 100
int main ()
{
  int i=0,n=0,j,m;
  int b;
  int a[1000];
  while(i<1000)
  {
      printf("\n i=");
      scanf("%d",&a[i]);
      n++;
      if(a[i]== 42)
        {
        break;
      }
      i++;
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n-1;j++)
      {
      if(a[i]<a[j])
      {
      b=a[i];
      a[i]=a[j];
      a[j]=b;
      }
    }
  }
  for(i=0;i<n;i++)
  printf("\n%d",a[i]);
  return 0;
}
