#include <stdio.h>

void create_letter_distribution_diagram(char string[], int count[]);

int main()
{
    char string[100000];
    int i, count[26] = {0};

    printf("Input a string\n");
    gets(string);

   create_letter_distribution_diagram(string, count);

    printf("Character Count\n");

    for(i = 0 ; i < 26 ; i++)
    {
        printf("%c \t  %d\n", i + 'a', count[i]);
    }
    return 0;
}

void create_letter_distribution_diagram(char string[], int count[])
{
    int i;

    for(i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z' )
        {
            count[string[i]-'a']++;
        }
    }



}

