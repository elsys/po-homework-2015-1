#include <stdio.h>
#include <string.h>

#define range 1000000

int main()
{
   int num = 0;
   char str[range];
   int index = 0;
   int sec_index = 0;
   int length = 0;
   int ok = 1;
   
   scanf("%d", &num);
   
   for (; ;)
   {
      ok = 1;
      sprintf(str, "%X", num);

      length = strlen(str);
      
      for (index = 0, sec_index = length - 1; index < length / 2; index++, sec_index--)
      {
         if (str[index] != str[sec_index])
         {
            ok = 0;
            break;
         }
      }
      
      if (ok == 1)
      {
         break;
      }
      
      else
      {
         num++;
      }
   }
   
   printf("%s", str);
   
   return 0;
}
