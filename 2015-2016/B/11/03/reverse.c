#include <stdio.h>
#include <string.h>

int main()
{
   char word[100],word2[100];
   int n,i,j;

   scanf("%s",word);

   n=strlen(word);

   for (i=n-1,j=0;i>=0;i--,j++)
      word2[j] = word[i];

   word2[j]='\0';

   printf("%s\n",word2);

   return 0;
}
