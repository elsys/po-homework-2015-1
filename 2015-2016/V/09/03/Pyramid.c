#include <stdio.h>
int main()
{
   int n, j , a , i;
   //printf("Enter n:");
   scanf("%d",&n);
   j = n;
   for (a = 1;a<=n;a++){
      for (i=1;i<j;i++){
         printf(" ");
      }
      for (i=1;i<=2*a-1;i++){
         printf("*");
      }
      j--;   
      printf("\n");
   }
   return 0;
}
