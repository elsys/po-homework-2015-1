#include <stdio.h>

int main()
{
    int array[1000];
    int i,n,z,d,y;
    for(i=0;i<1000;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]==42) break;
    }
  for(n=0; n<i; n++)
 {
  for(y=0; y<i; y++)
  {
   if(array[n]<array[y])
   {
    d=array[n];
    array[n]=array[y];
    array[y]=d;
   }
  }
 }
  for(z=0;z<i;z++) printf("%d\n", array[z]);
  return 0;
}
