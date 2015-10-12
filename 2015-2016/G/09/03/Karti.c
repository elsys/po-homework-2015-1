#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int karti(char card);

int main()
{
    int l,min,j,i;
    printf("Karta:");
    char k, cards[13];

    gets(cards);
    l=strlen(cards)-1;



    for (i = 0; i<=l; ++i)
    {
        min = i;
        for (j = i; j<=l; ++j)

            if (karti(cards[min])>karti(cards[j]))

                min = j;

        k=cards[min];
        cards[min] = cards[i];
        cards[i]=k;
    }
    puts(cards);
    return 0;
}

int karti(char card)
{

    if (card=='2')return  1;
    if (card=='3')return  2;
    if (card=='4')return  3;
    if (card=='5')return  4;
    if (card=='6')return  5;
    if (card=='7')return  6;
    if (card=='8')return  7;
    if (card=='9')return  8;
    if (card=='T')return  9;
    if (card=='J')return  10;
    if (card=='Q')return  11;
    if (card=='K')return  12;
    if (card=='A')return  13;

return 0;
}
