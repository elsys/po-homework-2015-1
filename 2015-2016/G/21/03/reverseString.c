#include <stdio.h>
#include <string.h>
void stringReverse(char string[]);

int main()
{
    char input[500];
    scanf("%[^\n]s",input);
    stringReverse(input);
    printf("%s\n",input);
    return 0;
}

void stringReverse(char string[])
{
    int lenght = strlen(string);
    char helper[lenght];
    int count = lenght-1;
    int i;
    for(i=0;i<lenght;i++)
    {
        helper[count] = string[i];
        count--;
    }
    strcpy(string,helper);
}
