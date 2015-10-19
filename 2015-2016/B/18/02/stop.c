#include <stdio.h>
#include <string.h>

int main()
{
    char word[50];
    int counter = 0;
    int lenght = 0;
    int check = 0;

    do{
        scanf("%s", word);
        lenght = strlen(word);

        for(counter = 0; counter < lenght; counter++)
        {
            if(word[counter] == 'S' && word[counter + 1] == 'T' && word[counter + 2] == 'O' && word[counter + 3] == 'P')
            {
                check = 1;
                break;
            }
        }

    }while(!check);

    for(counter = 0; counter < (lenght - 4); counter++)
    {
        printf("%c", word[counter] - 32);
    }
}
