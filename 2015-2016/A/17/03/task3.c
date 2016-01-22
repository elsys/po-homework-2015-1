#include <stdio.h>

int card_function(char);

int main()
{
   char string[14],temp;

   int i=0,n=0;

    scanf("%s",string);

    for(i = 1;i < 13; i++)
    {
        for(n=0; n < 13-i; n++)
        {
            if(card_function(string[n]) > card_function(string[n+1]))
            {
                temp = string[n];
                string[n] = string[n+1];
                string[n+1] = temp;
            }
        }
    }

    printf("%s", string);

    return 0;
}

int card_function(char string)
{
    switch(string)
    {
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        case 'T': return 10;
        case 'J': return 11;
        case 'Q': return 12;
        case 'K': return 13;
        case 'A': return 14;
        default: return 1;
    }
}
