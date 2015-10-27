#include <stdio.h>

int pal(char c[500])
{
    gets(s);
    i=0;
    ok=1;
    j=strlen(s)-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            ok=0;
            break;
        }
        i++;
        j--;
    }
    if(ok)
        printf("0");
    else
        printf("1");
}

int main()
{
    pal();
    return 0;
}
