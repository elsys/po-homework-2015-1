#include <stdio.h>

int main()
{
   int  h,c,n,t;

   scanf("%d",&n);


   for (h=1 ; h<=n ; h++)
   {

      for (c=h ; c<=n; c++)
         printf(" ");


      for (t=1 ; t<=(2*h-1); t++)
         printf("*");

      printf("\n");
   }

   return 0;
}
