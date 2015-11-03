#include <stdio.h>
int main()
{
 int h,i,k,z,j;
scanf("%d",&h);
z = h;
for(i = 1 ,j = 1; h > 0; i++ , j = j + 2 , h--)
 {
  for(k = z - i; k > 0; k--)
 {
    printf(" ");
  }
   for( k = 0; k < j; k++)
 {
   printf("*");
 }
   printf("\n");
}
}
