#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* get_hex(int);
int is_palindrome(const char* string);

int main()
{
    int input = 0;
    scanf("%d", &input);

    while(1)
    {
        char* result = get_hex(input);
        if (is_palindrome(result) == 0)
        {
            printf("%s", result);
            break;
        }

        input++;
    }
    return 0;
}

char* get_hex(int number)
{
    char* hex = (char*) malloc(256 * sizeof(char));
    sprintf(hex, "%X", number);
    return hex;
}

int is_palindrome(const char* string)
{
    int i;

    int length = strlen(string);
    for(i = 0; i < length; i++)
    {
        if(string[i] != string[length-1-i])
        {
            return 1;
        }
    }

    return 0;
}
