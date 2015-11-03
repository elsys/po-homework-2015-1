
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char letter, word[100],word2[100];
   int l,i=0;

scanf("%s",word);

   l=strlen(word)-1;
   strcpy(word2,word);

   while(l>i){

   letter=word[l];
   word[l]=word[i];
   word[i]=letter;


    i++;

    l--;

   }

if(strcmp(word,word2) == 0)
    printf("1");
else printf("0");
   return 0;
}

