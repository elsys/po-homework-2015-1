#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct SCard
{
    char face;
    int value;

};




int cardValueByFace(char face);

int main()
{
  int i, p, q, len;
  char c[13];
  struct SCard cards[13], temp;
  scanf("%s", c);
  len = strlen(c);
  for(i=0; i<len; i++)
  {
    cards[i].face = c[i];
    cards[i].value = cardValueByFace(c[i]);
  }

  for(p = 0; p < i; p++)
     {
         for(q=0; q < i-p; q++)
         {
             if(cards[q].value > cards[q+1].value)
              {
               temp= cards[q];
               cards[q] = cards[q+1];
               cards[q+1] = temp ;

              }
          }
      }
    for(i = 0; i < p; i++)
		printf("%c", cards[i].face);

    return 0;
}

int cardValueByFace(char face) {

    switch(face) {
        case '2':
             return 2;
        case '3':
             return 3;
        case '4':
             return 4;
        case '5':
             return 5;
        case '6':
             return 6;
        case '7':
             return 7;
        case '8':
             return 8;
        case '9':
             return 9;
        case 'T':
            return 10;
        case 'J':
             return 11;
        case 'Q':
            return 12;
        case 'K':
            return 13;
        case 'A':
            return 14;
        default: return 1;
    }
}


