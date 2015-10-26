#include <stdio.h>
#include <string.h>

    int  main()
{
    char s[100];
    int i,j;

    scanf("%[^'STOP']s",s);
     j=strlen(s);

    for(i=0;i<j;i++)O
    {

    if(s[i]>='a' && s[i]<='z') s[i]=s[i]-32;

    }
 printf("%s",s);
    return 0;
}

