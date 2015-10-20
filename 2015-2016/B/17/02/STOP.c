#include <stdio.h>
#include <stdlib.h>

    int  main()
{
    char s[100];
    int i,j;
   for(i=0;i<99;i++)
    scanf("%[^\n]s",&s);
     j=strlen(s);

    for(i=0;i<j;i++)
    {
    if(s[i]=='s' && s[i+1]=='t' && s[i+2]=='o' && s[i+3]=='p') break;

    if(s[i]>='a' && s[i]<='z') s[i]=s[i]-32;

    }
 printf("%s",s);
    return 0;
}

