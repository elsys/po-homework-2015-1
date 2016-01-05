#include <stdio.h>
#include <string.h>

#define SIZE_M 100

int check_palindrom(char string[])
{
    int i, length = strlen(string)-1, flag = 0;
    if(length <= 2)
        return 0;
    for( i = 0 ; i < length/2; i++, length--)
    {
        if(string[i] != string[length])
        {
            flag = 0;
            return flag;
        }
    }
    flag = 1;
    return flag;
}

int main()
{

    char string[SIZE_M];
    scanf("%s",string);
    printf("%d",check_palindrom(string));
}
