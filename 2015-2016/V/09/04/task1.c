#include<stdio.h>
int main(){
   int magic[10][10];
   int i, j = 0, M,N;
   int s, a, n;
   int temp = 0;
   //printf("Enter size n x n: \n");
    scanf("%d %d", &M, &N);
    if(M==N){
   //printf("Enter %d x %d numbers: \n", M, N);
   for (i = 0; i < M; i++) {
      for (j = 0; j < N; j++){
         scanf("%d", &magic[i][j]);
      }
   }
   for (i = 0; i < M; i++) {
        printf("\n");
      for (j = 0; j < N; j++) {
         printf("%d", magic[i][j]);
      }
   }
   s = 0;
   for (i = 0; i < M; i++) {
      for (j = 0; j < N; j++) {
         if (i == j)
            s = s + magic[i][j];
      }
   }
   for (i = 0; i < M; i++) {
      a = 0;
      for (j = 0; j < N; j++) {
         a = a + magic[i][j];
      }
      if (s == a)
         temp = 1;
      else {
         temp = 0;
         break;
      }
   }
   for (i = 0; i < M; i++) {
      n = 0;
      for (j = 0; j < N; j++) {
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
}
