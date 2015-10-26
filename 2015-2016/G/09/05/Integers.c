#include <stdio.h>

int main()
{
   int m, n, c, d, matrix[10][10], transpose[10][10];

   printf("Vuvejdane v matricata:\n");


   for (c = 0; c < 4; c++)
      for(d = 0; d < 4; d++)
         scanf("%d",&matrix[c][d]);

   for (c = 0; c < 4; c++)
      for( d = 0 ; d < 4 ; d++ )
         transpose[d][c] = matrix[c][d];

   printf("Transportirane na matricata:-\n");

   for (c = 0; c < 4; c++) {
      for (d = 0; d < 4; d++)
         printf("%d\t",transpose[c][d]);
      printf("\n");
   }

   return 0;
}
