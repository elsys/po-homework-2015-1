

#include <stdio.h>
 
int main()
{
   int m=4, n=4, c, d, z[10][10], t[10][10];
 
   printf("Vuvedete z (sled vsqka cifra da ima raztoqnie)\n");
 
   for (c = 0; c < m; c++)
      for(d = 0; d < n; d++)
         scanf("%d",&z[c][d]);
 
   for (c = 0; c < m; c++)
      for( d = 0 ; d < n ; d++ )
         t[d][c] = z[c][d];
 
   printf("\n");
 
   for (c = 0; c < n; c++) {
      for (d = 0; d < m; d++)
         printf("%d\t",t[c][d]);
      printf("\n");
   }
 
   return 0;
}
