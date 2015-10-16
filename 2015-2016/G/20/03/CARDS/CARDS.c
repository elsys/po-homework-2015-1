#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cards[13];
    scanf("%s",cards);
    int counter =0;
    for(;counter < 13;counter++)
    {
      switch (cards[counter])
      {
         case '2':cards[counter] = 2;
            break;
         case '3':cards[counter] = 3;
            break;
         case '4':cards[counter] = 4;
            break;
         case '5':cards[counter] = 5;
            break;
         case '6':cards[counter] = 6;
            break;
         case '7':cards[counter] = 7;
            break;
         case '8':cards[counter] = 8;
            break;
         case '9':cards[counter] = 9;
            break;
         case 'T':cards[counter] = 10;
            break;
         case 'J':cards[counter] = 11;
            break;
         case 'Q':cards[counter] = 12;
            break;
         case 'K':cards[counter] = 13;
            break;
         case 'A':cards[counter] = 14;

         break;
      }
    }
    int c = 0;
    char swap;
    int d;
    int n =13;
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (cards[d] > cards[d+1])
      {
        swap       = cards[d];
        cards[d]   = cards[d+1];
        cards[d+1] = swap;
      }
    }
  }
  counter =0;
  for(;counter < 13;counter++)
    {
      switch (cards[counter])
      {
         case 2:cards[counter] = '2';
            break;
         case 3:cards[counter] = '3';
            break;
         case 4:cards[counter] = '4';
            break;
         case 5:cards[counter] = '5';
            break;
         case 6:cards[counter] = '6';
            break;
         case 7:cards[counter] = '7';
            break;
         case 8:cards[counter] = '8';
            break;
         case 9:cards[counter] = '9';
            break;
         case 10:cards[counter] = 'T';
            break;
         case 11:cards[counter] = 'J';
            break;
         case 12:cards[counter] = 'Q';
            break;
         case 13:cards[counter] = 'K';
            break;
         case 14:cards[counter] = 'A';

         break;
      }
    }
    printf("%s",cards);
    return 0;
}
