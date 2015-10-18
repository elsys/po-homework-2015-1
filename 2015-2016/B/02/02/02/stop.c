#include <stdio.h>


int main()
{
    char c[500];
    int i;



    for(i=0;c[i]<499;i++)
    {
        c[i]=getchar();
        if (c[i]=='P')
            {
                if(c[i-1]=='O')
                {
                    if(c[i-2]=='T')
                    {
                        if(c[i-3]=='S')
                        {
                            c[i]=' ';
                            c[i-1]=' ';
                            c[i-2]=' ';
                            c[i-3]=' ';
                            break;
                        }
                    }
                }
            }
    }



    for(i=0;i<499;i++)
    {
        if(c[i]<='z')
        {
            if(c[i]>='a')
                c[i]=c[i]-32;
        }
    }



    printf("\n%s\n", c);
    return 0;
}
