#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,l;
    char s[100];
    printf("\n Enter a word/sentence : ");
    fgets(s,sizeof(s),stdin);
    printf("\n");
    l=strlen(s);
    for(i=0;i<=l;i++)
    {
        printf("%c",s[l-i]);
    }
    printf("\n");
    return 0;
}

