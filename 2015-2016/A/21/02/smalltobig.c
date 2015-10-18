#include <stdio.h>
int main()
{
    char s[1000];
    int i=0,l=0;
    while(1)
    {
        scanf("%c",s);
        l++;
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        i++;
    }
    printf("\n");
return 0;
}
