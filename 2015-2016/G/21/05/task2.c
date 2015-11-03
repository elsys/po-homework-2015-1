#include <stdio.h>
int isPalindrome(char text[]);

int main()
{
    char input[500];
    scanf("%[^\n]s",input);
    printf("%d",isPalindrome(input));
}

int isPalindrome(char text[])
{
    int lenght=0,i=0;
    if(text[0]=='\0')
    {
        return 0;
    }
    while(text[lenght]!='\0')
    {
        lenght++;
    }
    lenght--;
    while (i < lenght)
    {
        if (text[i] != text[lenght])
        {
            return 0;
        }
        i++;
        lenght--;
    }
    return 1;
}
