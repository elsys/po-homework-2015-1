#inlcude <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char txt[160];
  scanf("%[^\n]", txt);
  int bt = 0;
  for(int i=0;i<=strlen(txt);i++){
    switch(txt[i])
    {
      case 'a': case 'd': case 'g': case 'j': case 'm': case 'p': case 't': case 'w': case ' ': bt++; brack;
      case 'b': case 'e': case 'h': case 'k': case 'n': case 'q': case 'u': case 'x': bt = bt + 2; brack;
      case 'c': case 'f': case 'i': case 'l': case 'o': case 'r': case 'v': case 'y': bt = bt + 3; brack;
      case 's': case 'z': bt = bt + 4; brack;
    }
  }
  printf("%d", bt);
  return 0;
}
