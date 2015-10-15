#include <stdio.h>
#include <stdlib.h>

int main()
{   int i;
    char s[1000];
    do{scanf("%s",s);
    if(s[1]=='S'&&s[2]=='T'&&s[3]=='O'&&s[4]=='P')
        break;
    else
        for(i=0;i<1000;i++)
            if(s[i]>='a'&&s[i]<='z')
                s[i]=s[i]-('a'-'A');
    printf("\n%s",s);
    }while(1<2);

    return 0;
}
