#include <stdio.h>

int main()
{
   int height=1,c=1,n,x;
 
   printf("How tall you want the pyramid to be? : ");
   scanf("%d",&n);
   x=n;

   for (c=1;height<=n;height++)
   {
      for (c=1;c<x;c++)
         printf(" ");
      x--;
      for (c=1;c<=2*height-1;c++)
         printf("I");
      printf("\n");
   }
   return 0;
}
