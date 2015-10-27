#include <stdio.h>

int main()
{
    char str[64],strr[64],a,i,ii;
    printf("Text:");
    gets(str);
    a=strlen(str);
    ii=a;
    for(i=0;i<=a;i++)
    {
        strr[ii]=str[i];
        ii--;
    }
    for(ii=0;ii<=a;ii++)
    {
        printf("%c",strr[ii]);
    }
    return 0;
}

