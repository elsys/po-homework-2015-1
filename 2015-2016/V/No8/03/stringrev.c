#include <stdio.h>
#include <string.h>
int main()
{
    char str[1024];
    scanf("%1024s",str);
    int  n = strlen(str);
    for(n=n-1;n>=0;n--)
        printf("%c",str[n]);
}
