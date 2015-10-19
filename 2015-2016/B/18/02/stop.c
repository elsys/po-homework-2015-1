#include <stdio.h>
#include <string.h>

int main()
{
    char word[50];
    int counter = 0;
    int lenght = 0;

    scanf("%[^'STOP']s", word);
    lenght = strlen(word);

    for(counter = 0; counter < lenght; counter++)
    {
        if(word[counter] == 'S' && word[counter + 1] == 'T' && word[counter + 2] == 'O' && word[counter + 3] == 'P')
        {
            break;
        }
    }

    for(counter = 0; counter < lenght - 1; counter++)
    {
        printf("%c", word[counter] - 32);
    }
}
