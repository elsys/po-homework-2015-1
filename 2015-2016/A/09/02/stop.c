#include <stdio.h>
#include <string.h>
#define maxLength 1000

int main()
{
    char sentence[maxLength];
    int i;

    while (1)
    {
        scanf("%s", sentence);
        if (sentence[0] == 'S' && sentence[1] == 'T' && sentence[2] == 'O' && sentence[3] == 'P')
        {
            return 0;
        }
        for (i = 0; i < strlen(sentence); i++)
        {
            printf("%c", sentence[i] >= 'a' && sentence[i] <= 'z' ? sentence[i] + ('A' - 'a') : sentence[i]);
        }
        printf("\n");
    }
}
