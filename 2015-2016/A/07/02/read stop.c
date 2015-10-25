
#include <stdio.h>
#include <string.h>

int main()
{
    char letters[200];
    int i, j;

    for(i = 0; i <= 200; i++)
    {
        scanf("%s", letters);
        if (letters[0] == 'S' && letters[1] == 'T' && letters[2] == 'O' && letters[3] == 'P')
        {
            break;
        }
    for(j = 0;j <= 200; j++)
    {
        if(letters[j] >= 'a' && letters[j] <= 'z')
        {
            letters[j] = letters[j] - 32;
        }
    }
    printf("%s\n", letters);
    }
    return 0;
}

