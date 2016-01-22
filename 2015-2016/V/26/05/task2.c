#include <stdio.h>

int pal(char s[100])
{
    int i = 0, ok = 1, j;
    j = strlen(s)-1;
    while(i < j)
    {
        if(s[i] != s[j])
        {
            ok = 0;
            break;
        }
        i++; j--;
    }
    if(ok)
        printf("1");
    else
        printf("0");
}

int main()
{
    char s[100];
    gets(s);
    pal(s);
    return 0;
}
