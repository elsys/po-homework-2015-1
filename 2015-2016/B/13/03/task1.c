#include <stdio.h>
int main()
{
  int row,space,broj,n;

   scanf("%d",&n);

   for(row=1;row<=n;row++)
   {
      for(space=row;space<n;space++)
       {
           printf(" ");
       }

       broj=2*row - 1;

       for(;broj>0;broj--)
       {
           printf("*");
       }

       printf("\n");
   }
   
   return 0;

}
