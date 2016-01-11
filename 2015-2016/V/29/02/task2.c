#include <stdio.h>
#include <string.h>
#define true 1

int main()
{

    char word[100] = { 0 };
    int i = 0;

    while(true)
    {
        scanf("%s",word);
        if(word[0] == 'S' && word[1] == 'T' && word[2] == 'O' && word[3] == 'P')
            break;
        while(i < strlen(word))
        {
            if(word[i] >= 'a' && word[i] <= 'z')
                word[i] -= ('a' - 'A');
            i++;
        }
        i = 0;
        printf("%s ",word);
    }

    return 0;
}
