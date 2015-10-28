#include <stdio.h>

int main()
{
   int c, d, matrix[4][4], transpose[4][4];

   for (c = 0; c < 4; c++)
      for(d = 0; d < 4; d++)
         scanf("%d",&matrix[c][d]);

   for (c = 0; c < 4; c++)
      for( d = 0 ; d < 4 ; d++ )
         transpose[d][c] = matrix[c][d];

	for (c = 0; c < 4; c++) {
		for (d = 0; d < 4; d++){
	        	printf("%d\t",transpose[c][d]);
		}
      		printf("\n");
   	}

   return 0;
}
