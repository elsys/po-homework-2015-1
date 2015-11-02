#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[20];
    int i,j,p=0;
    printf("Vavedi simvoli:");
    scanf("%s",s);
    j=strlen(s);
    for(i=0;i<j;i++)
    {
        if(s[i]!=s[j-i-1])
        {
            p=1;break;
        }
    }
    if(p==1)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
}
