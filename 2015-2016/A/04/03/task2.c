#include <stdio.h>
#include <string.h>

int main()
{
   char s[10], r[10];
   int n, i, d;

   scanf("%s",&s);

   n = strlen(s);

   for (i=n-1 , d=0 ; i >= 0; i--, d++)
      r[d] = s[i];

   r[d] = '\0';

   printf("%s\n", r);
   return 0;
}
