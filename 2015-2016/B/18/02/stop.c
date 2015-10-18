#include <stdio.h>
#include <string.h>

int main()
{
    char word[50];
    int counter, lenght;

    scanf("%s", word);
    lenght = strlen(word);

    for(counter = 0; counter < lenght; counter++)
    {
        if(word[counter] == 'S' && word[counter + 1] == 'T' && word[counter + 2] == 'O' && word[counter + 3] == 'P')
        {
            for(counter = 0; counter < (lenght - 4); counter++)
            {
                printf("%c", word[counter] - 32);
            }

            printf("\n");

            break;
        }

        else
        {
            printf("Enter word ending with STOP!");
            break;
        }
    }
}
