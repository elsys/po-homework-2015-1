#include <stdio.h>
#include <string.h>

#define lowwer_letters 97
#define upper_letters 65

int cldd(char sentence[1000] ,int alphabet[2][26]);

int main()
{
   char sentence[1000];
   int alphabet[2][26];
   
   scanf("%[^\n]s", sentence);

   cldd(sentence, alphabet);
   return 0;
}

int cldd(char sentence[1000] ,int alphabet[2][26])
{
    int counter = 0;

    for (;counter < 26; counter ++)
    {
       printf("%c -> %d \n", counter +lowwer_letters, 0);

    }
    return 0;
}

