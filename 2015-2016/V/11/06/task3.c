#include <stdio.h>
#include <string.h>
#define s_len 256
int * create_letter_distribiton_diagram(int len,char s[]);
int main()
{
  char s[s_len];
  scanf("%s",&s);
  int * r;
  int len = strlen(s);
  r = create_letter_distribiton_diagram(len, s);
  int count_l;
  for(count_l = 0;count_l< 26;count_l++)
    {
    printf("%c - %d\n",count_l +'a',*(r + count_l));
    }
}
int * create_letter_distribiton_diagram(int len,char s[])
{
  static int alphabet[26];
   int fill;
   for(fill = 0;fill<26;fill++)
   {
    alphabet[fill] = 0;
   }
  int count_l;
  int count_s;
  for(count_l = 0; count_l < 26; count_l++)
    {
      for(count_s = 0; count_s < len ; count_s++)
    {
      if(count_l + 'a' == *(s + count_s) || count_l + 'A' == *(s + count_s))
      {
        alphabet[count_l]++;
       }
  }
 }
 return alphabet;
}
