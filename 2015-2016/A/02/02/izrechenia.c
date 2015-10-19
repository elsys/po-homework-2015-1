#include <stdio.h>
#include <stdlib.h>

int main()
{   int i;
    char s[1000];
    do{scanf("%s",s);
    if(s[0]=='S'&&s[1]=='T'&&s[2]=='O'&&s[3]=='P')
        break;
    else
        for(i=0;i<1000;i++)
            if(s[i]>='a'&&s[i]<='z')
                s[i]=s[i]-('a'-'A');
    printf("\n%s",s);
    }while(1<2);

    return 0;
}
