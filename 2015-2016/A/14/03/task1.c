#include <stdio.h>

int main()
{
   int height=1,c=1,n,x;

   scanf("%d",&n);
   x=n;

   for (c=1;height<=n;height++)
   {
      for (c=1;c<x;c++)
         printf(" ");
      x--;
      for (c=1;c<=2*height-1;c++)
         printf("*");
      printf("\n");
   }
   return 0;
}
