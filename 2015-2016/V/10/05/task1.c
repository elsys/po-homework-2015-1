#include <stdio.h>
 
int main()
{
   int m=4, n=4, c, d, matrix[10][10], transpose[10][10];
 
 
  //printf("vuvedi elementite na matricata\n");
 
   for (c = 0; c < m; c++)
      for(d = 0; d < n; d++)
         scanf("%d",&matrix[c][d]);
 
   for (c = 0; c < m; c++)
      for( d = 0 ; d < n ; d++ )
         transpose[d][c] = matrix[c][d];
 
   //printf("Transponiraneto na matricata \n");
 
   for (c = 0; c < n; c++) {
      for (d = 0; d < m; d++)
         printf("%d\t",transpose[c][d]);
      printf("\n");
   }
 
   return 0;
}

