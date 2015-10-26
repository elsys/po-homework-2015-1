#include<stdio.h>
#include<string.h>
#define maxlen 14

int conv(char);

int main()
{
 int i, j;
 char swipe;
 char deck[maxlen];
 scanf("%s", deck);
 for (i = 1; i<13; i++)
 {
  for (j = 0; j<13 - i; j++)
  {
   if (conv(deck[j])>conv(deck[j + 1]))
   {
    swipe = deck[j];
    deck[j] = deck[j + 1];
    deck[j + 1] = swipe;
   }
  }
 }
 printf("%s\n", deck);
 return 0;
}

int conv(char deck)
{
 switch (deck){

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
 default:
  return 0;
 }
}
