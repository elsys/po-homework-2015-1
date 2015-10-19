#include <stdio.h>

int main()
{
    char d[99];
    int i=0;

    while(d[i]!=99)
    {
    d[i]=getchar();
    if (d[i]=='P'){
        if(d[i-1]=='O' && d[i-2]=='T' && d[i-3]=='S') break;
    }
         i++;
    }


    while(i>=0)
    {
        if(d[i]>='a' && d[i]<='z')
            d[i]=d[i]-32;
                i--;
    }

    printf("\n%s",d);

  return 0;
}
