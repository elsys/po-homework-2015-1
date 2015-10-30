#include<stdio.h>


void main() {
   int matrica[4][4],i,j;


   printf("vuvedete stoinostite:\n");
   for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++) {
         scanf("%d", &matrica[i][j]);
      }
   }


   for (i = 0; i < 4; i++) {

            printf("\n");

      for (j = 0; j < 4; j++) {

      printf("%d", matrica[i][j]);
      }
   }


   for (i = 1; i < 4; i++) {
      for (j = 0; j < 4; j++) {

       matrica[i][j] = matrica[j][i];

      }
   }

   printf("\nTranspotirana matrixa :\n");
   for (i = 0; i <4; i++) {
               printf("\n");
      for (j = 0; j < 4; j++) {
         printf("%d", matrica[i][j]);
      }
   }


}
