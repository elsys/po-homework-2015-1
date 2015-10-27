#include<stdio.h>
#include<string.h>

int card(char);

int main()
{
    int i = 0, j, sorted = 0;
    char swap;
    char str[14];
    scanf("%s", str);
    while(!sorted)
    {
        i++;
        sorted = 1;
        for (j = 0; j < 13 - i; j++)
        {
            if (card(str[j]) > card(str[j + 1]))
            {
                swap = str[j];
                str[j] = str[j + 1];
                str[j + 1] = swap;
                sorted = 0;
            }
        }
    }
    printf("The sorted deck is: %s", str);
    return 0;
}

int card(char str)
{
    switch (str)
    {
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
