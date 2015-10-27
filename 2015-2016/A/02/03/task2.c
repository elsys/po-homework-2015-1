#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   int i,n;
    char s[21];
    fgets(s,21,stdin);
    n=strlen(s);
    for(i=n;i>=0;i--)
        printf("%c",s[i]);
    return 0;
}
