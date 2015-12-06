#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char s[3025];
    int n;
    int j;
    int len;
    int l;
    char x;
    scanf("%s", s);
    n = 0;
    j = 0;
    x = s[n];

    if(strcmp(s, "STOP")==0)
    {
        return 0;
    }

    l = 0;
    len = strlen(s);
    while(l<len)
    {
        if(x >=48 && x <=57)
        {
            printf("%c", x);
            j = 1;
        }
        if(x == ' ')
        {
            printf(" ");
        }
        if(j != 1)
        {
            x -= 32;
            printf("%c", x);
        }
        j = 0;
        n++;
        x = s[n];
        l++;
    }
    printf("\n");
    strcpy(s, " ");
    main();
    return 0;
}
