#include <stdio.h>
#include <string.h>

int main()
{
   char a[100], b[100];

   printf("Vuvedete tekst:\n");
   gets(a);

   strcpy(b,a);
   strrev(b);

   if (strcmp(a,b) == 0)
      printf("0\n");
   else
      printf("1\n");

   return 0;
}
