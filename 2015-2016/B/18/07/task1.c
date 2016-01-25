#include <stdio.h>

int main()
{
   int a = 0;
   int b = 0;
   
   scanf("%d %d", &a, &b);
   
   if (((b >> a) & 1) == 1)
   {
      printf("1");
   }
   
   else
   {
      printf("0");
   }
}
