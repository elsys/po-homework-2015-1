#include <stdio.h>
#include <string.h>
#define sentence_len 256
int * create_letter_distribiton_diagram(int len,char sentence[]);
int main()
{
  char sentence[sentence_len];
  scanf("%s",sentence);
  int * result;
  int len = strlen(sentence);
  result = create_letter_distribiton_diagram(len, sentence);
  int count_letters;
  for(count_letters = 0;count_letters< 26;count_letters++)
    {
    printf("%c - %d\n",count_letters +'a',*(result + count_letters));
    }
}
int * create_letter_distribiton_diagram(int len,char sentence[])
{
  static int alphabet[26];
   int fill;
   for(fill = 0;fill<26;fill++)
   {
    alphabet[fill] = 0;
   }
  int count_letters;
  int count_sentence;
  for(count_letters = 0; count_letters < 26; count_letters++)
    {
      for(count_sentence = 0; count_sentence < len ; count_sentence++)
    {
      if(count_letters + 'a' == *(sentence + count_sentence) || count_letters + 'A' == *(sentence + count_sentence))
      {
        alphabet[count_letters]++;
       }
  }
 }
 return alphabet;
}
