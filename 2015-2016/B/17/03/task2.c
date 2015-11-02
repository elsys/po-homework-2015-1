#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,j;
    char s[100];
    scanf("%[^\n]s",s);
    j=strlen(s);
    for(i=j-1;i>=0;i--)
        printf("%c",s[i]);

    return 0;
}
