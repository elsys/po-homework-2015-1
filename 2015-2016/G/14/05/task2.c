
#include <stdio.h>
#include <string.h>

int main()
{
   char text[100];
   char g;
   int a, b, c, i = 0;

    printf("Enter word:\n");
    while((g = getchar()) !='\n'){
        text[i] = g;
        i++;
    }

   c = i - 1;
   b = i/2;

   for (a = 0; a < b; a++)
   {
      if (text[a] != text[c])
      {
         printf("0\n");
         break;
      }
      c--;
   }
   if (a == b)
      printf("1\n");

   return 0;
}
