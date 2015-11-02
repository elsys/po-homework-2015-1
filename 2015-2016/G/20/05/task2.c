#include <stdio.h>
 
int main()
{
    char word[50];
    scanf("%[^\n]s",word);
    int l=0,i,j;
    while (word[l] != '\0')
      l++;
   for (i = 0,j=l-1; i < l/2; i++,j--)
   {
      if (word[i] != word[j])
      {
         printf("0");
         break;
      }
   }
   if (i == l/2)
      printf("1");
    return 0;
}
