#include <stdio.h>

int main()
{
    int i;
    char ch;
    for(i = 1; i < 255; i++)
    {
        ch = (char)i;
        printf("%d     %c\n", i, ch);
    }
    return 0;
}
