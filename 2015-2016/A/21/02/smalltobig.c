#include <stdio.h>

void main()
{
    char s[1000];
    int i=0,l=0;
    while(1)
    {
        s[i]=getche();
        l++;
        if(s[i]=='P')
        {
            if(s[i-1]=='O')
            {
                if(s[i-2]=='T')
                {
                    if(s[i-3]=='S')
                    {
                        break;
                    }
                }
            }
        }
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        i++;
    }
    printf("\n");
    for(i=0;i<l;i++)
    {
        printf("%c",s[i]);
    }
}
