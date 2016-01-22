#include <stdio.h>

int main()
{
   int row, base, n, temp;
   scanf("%d",&n);

   temp = n;

   for (row = 1; row <= n; row++)
   {
      for (base = 1 ; base < temp ; base++)
         printf(" ");

      temp--;

      for (base = 1; base <= 2*row - 1; base++)
         printf("$");

         printf("\n");
   }

   return 0;
}
