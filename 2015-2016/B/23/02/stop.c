#include<stdio.h>
int main()
{
    int a = 0;
    char word[100];
    while(1)
    {
        scanf("%s", word);
        if(word[0] == 'S' && word[1] == 'T' && word[2] == 'O' && word[3] == 'P') break;
        else if(word[0] == 's' && word[1] == 't' && word[2] == 'o' && word[3] == 'p') break;
        else
        {
            for (; a < 100; a++)
            {
                if (word[a] >= 'a' && word[a] <= 'z') word[a] -= 32;
            }
            printf("%s\n", word);
        }
    }
    return 0;
}

