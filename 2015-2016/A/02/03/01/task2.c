#include <stdio.h>
#include <stdlib.h>

int main()
{   int i;
    char s[21];
    fgets(s,21,stdin);
    for(i=19;i>=0;i--)
        printf("%c",s[i]);
    return 0;
}
