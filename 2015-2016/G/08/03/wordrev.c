#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char letter, word[100];

   int l,i=0;

   gets(word);

   l=strlen(word)-1;

   while(l>i){

   letter=word[l];
   word[l]=word[i];
   word[i]=letter;


    i++;

    l--;

   }
puts(word);
   return 0;
}
