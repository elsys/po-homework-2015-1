#include <stdio.h>

int main()
{
   int n = 0;
   int v = 0;
   int p = 0;
   int result = 0;
   
   scanf("%d %d %d", &n, &v, &p);
   
   if (v == 1)
   {
      result = ((1 << p) | n); 
   }
   
   else
   {
      result = (~(1 << p) & n);
   }
   
   printf("%d", result);
   
   return 0;
}
