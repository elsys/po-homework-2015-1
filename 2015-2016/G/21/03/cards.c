#include <stdio.h>
#include <string.h>
void sortCards(char deck[]);
int cardPower(char card);

int main()
{
    char deck[13];
    scanf("%s",deck);
    sortCards(deck);
    printf("%s\n",deck);
}

void sortCards(char deck[])
{
    int lenght = strlen(deck);
    int i;
    for(i=0;i<lenght;i++)
    {
        int j;
        for(j=0;j<lenght-1;j++)
        {
            if(cardPower(deck[j])>cardPower(deck[j+1]))
            {
                char helper = deck[j];
                deck[j] = deck[j+1];
                deck[j+1] = helper;
            }
        }
    }

}

int cardPower(char card)
{
    int power = 0;
    if(card>='A'&&card<='Z')
    {
        if(card == 'A')
        {
            power = 14;
        }
        else if(card == 'K')
        {
            power = 13;
        }
        else if(card == 'Q')
        {
            power = 12;
        }
        else if(card == 'J')
        {
            power = 11;
        }
        else
        {
            power = 10;
        }
    }
    else
    {
        power = card-'0';
    }
    return power;
}
