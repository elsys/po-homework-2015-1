#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b, c, bit;
   scanf("%d", &a);
   scanf("%d", &b);

   c = b >> a;
   bit = c&1;
   printf("%d", bit);
}

