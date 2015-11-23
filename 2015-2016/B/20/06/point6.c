

#include <stdio.h>
 
int main()
{
   int x, y, *a, *b, w;
 
   printf("vavedete stoinostite na a i b\n");
   scanf("%d%d", &x, &y);
 
   printf("\n x = %d\n y = %d\n", x, y);
 
    a = &x;
    b = &y;
 
      w = *b;
     *b = *a;
     *a =  w;
 
   printf("\n x = %d\n y = %d\n", x, y);
 
   return 0;
}

