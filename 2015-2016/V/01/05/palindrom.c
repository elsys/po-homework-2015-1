#include <stdio.h>
#include <string.h>

int palindrom(char string[25]);

int main()

{
    char string[25];
    int check;
    printf("Vyvedi niz \n");
    scanf("%s",string);
    check=palindrom(string);
    if (check == 1)
       printf ("%s e palindrom \n", string);
    else
       printf("%s ne e palindrom \n", string);
    return 0;
}

int palindrom(char string[25])
{
    char reverse_string[25] = {'\0'};
    int i, length = 0, flag = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    printf("Duljinata na niza '%s' = %d\n", string, length);
    for (i = length - 1; i >= 0 ; i--)
    {
        reverse_string[length - i - 1] = string[i];
    }
    for (i = 0; i < length ; i++)
    {
        if (reverse_string[i] != string[i])
            return 0;
     }
     return 1;
}

