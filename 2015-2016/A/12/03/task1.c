#include <stdio.h>

int main()
{
   int row, m, n, t;
   scanf("%d",&n);

   t=n;

   for (row=1; row<=n; row++)
   {
      for (m=1; m<t; m++)
      {
         printf(" ");
      }
      t--;

      for (m=1; m<=2*row-1; m++)
      {
         printf("*");
      }
      printf("\n");
   }

   return 0;
}
