#include <stdio.h>
#include <string.h>

int main()
{
   char input[160];
   int count = 0;
   int index = 0;
   int lengh = 0;
   
   scanf("%[^\n]s", input);
   
   lengh = strlen(input);
   printf("%d\n", lengh);
   for (index = 0; index < lengh; index++)
   {
      if (input[index] == 'a' || input[index] == 'd' || input[index] == 'g' || input[index] == 'j' || input[index] == 'm' || input[index] == 'p' || input[index] == 't' || input[index] == 'w')
      {
         count++;
      }     
      
      if (input[index] == 'b' || input[index] == 'e' || input[index] == 'h' || input[index] == 'k' || input[index] == 'n' || input[index] == 'q' || input[index] == 'u' || input[index] == 'x')
      {  
         count = count + 2;
      }
      
      if (input[index] == 'c' || input[index] == 'f' || input[index] == 'i' || input[index] == 'l' || input[index] == 'o' || input[index] == 'r' || input[index] == 'v' || input[index] == 'y')
      {
         count = count + 3;
      }
      
      if (input[index] == 's' || input[index] == 'z')
      {
         count = count + 4;
      }
      
      if (input[index] == ' ')
      {
         count++;
      } 
      
   }
   
   printf("%d\n", count);
   
   return 0;
}
