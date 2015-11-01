#include <stdio.h>
int main()
{
   int i, j;
   int x[4][4];
   int y[4][4];
   
   printf("Enter 16 numbers:");
   for (i = 0; i < 4; i++){
      for(j = 0; j < 4; j++){
         scanf("%d",&x[i][j]);
      }
   }

   for (i = 0; i < 4; i++){
      for( j = 0 ; j < 4; j++ ){
         y[j][i] = x[i][j];
      }
   }

   for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++){
         printf("%d ",y[i][j]);
      }
      printf("\n");
   }

   return 0;
}
