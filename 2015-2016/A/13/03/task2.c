#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, n;
    char str[100];
    fgets(str, 100, stdin);
    n = strlen(str);
    for(i=n-1;i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}

