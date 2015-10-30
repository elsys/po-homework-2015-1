#include <stdio.h>
int main()
{
  char cards[15];
  int i,asciiCards[15],min,j,pom;

  scanf("%[^\n]s",cards);

  for(i=0;i<14;i++)
  {
    asciiCards[i]=cards[i];
    if(cards[i]=='T') asciiCards[i]=58;
    if(cards[i]=='J') asciiCards[i]=59;
    if(cards[i]=='Q') asciiCards[i]=60;
    if(cards[i]=='K') asciiCards[i]=61;
    if(cards[i]=='A') asciiCards[i]=62;
  }



   for(i=0;i<13;i++)
   {
        min=i;
       for(j=i+1;j<13;j++)
       {if(asciiCards[min]>asciiCards[j]) min=j;}

       pom=asciiCards[min];
       asciiCards[min]=asciiCards[i];
       asciiCards[i]=pom;
   }


  for(i=0;i<13;i++)
  {
    if(asciiCards[i]==62) asciiCards[i]=65;
    if(asciiCards[i]==61) asciiCards[i]=75;
    if(asciiCards[i]==60) asciiCards[i]=81;
    if(asciiCards[i]==59) asciiCards[i]=74;
    if(asciiCards[i]==58) asciiCards[i]=84;

      printf("%c   ",asciiCards[i]);
  }

   return 0;
}
