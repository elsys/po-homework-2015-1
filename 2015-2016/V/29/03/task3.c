#include <stdio.h>
#define swap(x,y) { x+=y; y=x-y; x-=y; }

char getCard(char card)
{
    switch(card)
    {
    case 'A':
        return ('9'+5);
    case 'K':
        return ('9'+4);
    case 'Q':
        return ('9'+3);
    case 'J':
        return ('9'+2);
    case 'T':
        return ('9'+1);
    case ('9'+1):
        return 'T';
    case ('9'+2):
        return 'J';
    case ('9'+3):
        return 'Q';
    case ('9'+4):
        return 'K';
    case ('9'+5):
        return 'A';
    default:
        return card;
    }

}

int main() {

    char deck[13];
    int i = 0, j = 0;

    while(i < 13) {
        scanf("%c%*c", &deck[i]);
        deck[i] = getCard(deck[i]);
        i++;
    }

    for(i = 0; i < 13; i++)
        for(j = 0; j < 13 - i - 1; j++)
            if(deck[j] > deck[j+1])
                swap(deck[j],deck[j+1]);
    for(i = 0; i < 13; i++)
        printf("%c ",getCard(deck[i]));

    return 0;
}
