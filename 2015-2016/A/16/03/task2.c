#include <stdio.h>
#include <string.h>

int main(void)
{
   char a[10], b[10];
   int d, i, n;
   fgets(a, 10, stdin);
   n = strlen(a);
   for (i=n-1 , d=0 ; i >= 0; i--, d++)
   {
    b[d] = a[i];
   }
   b[d] = '\0';
   printf("%s\n", b);
   return 0;
}
