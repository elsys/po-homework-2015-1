#include<stdio.h>
int main(){
   int square = 3;
   int magic[3][3];
   int i, j = 0;
   int s, a, n;
   int temp = 0;

   printf("Enter numbers 3x3:\n");

   for (i = 0; i < square; i++) {
      for (j = 0; j < square; j++)
         scanf("%d", &magic[i][j]);
   }
   for (i = 0; i < square; i++) {
        printf("\n");
      for (j = 0; j < square; j++) {
         printf("%d", magic[i][j]);
      }
   }
   s = 0;
   for (i = 0; i < square; i++) {
      for (j = 0; j < square; j++) {
         if (i == j)
            s = s + magic[i][j];
      }
   }
   for (i = 0; i < square; i++) {
      a = 0;
      for (j = 0; j < square; j++) {
         a = a + magic[i][j];
      }
      if (s == a)
         temp = 1;
      else {
         temp = 0;
         break;
      }
   }
   for (i = 0; i < square; i++) {
      n = 0;
      for (j = 0; j < square; j++) {
         n = n + magic[j][i];
      }
      if (s == n)
         temp = 1;
      else {
         temp = 0;
         break;
      }
   }
   if (temp == 1)
      printf("\n \n Magic!"); // W: 618753294
   else
      printf("\n \n Not Magic. \n");
   return 0;
}
