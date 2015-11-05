#include <stdio.h>

int main()
{
   char sentence[3000];
   int counter = 0;
   int alphabet[26];
   scanf("%[^\n]s" ,sentence);

   while(sentence[counter] != '\0')
   {
   printf("%d",counter);
      if (sentence[counter] >= 'a' && sentence[counter] <= 'z')
      {
         
      }
      counter ++;
   }
   return 0;
}
