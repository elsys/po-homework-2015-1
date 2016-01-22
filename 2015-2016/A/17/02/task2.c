#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c[50];
    int i;

    while(1)
    {
        scanf("%s", c);
        if(c[0]=='S' && c[1]== 'T' && c[2]=='O' && c[3]=='P')
        {
            break;
        }


            for(i=0;i<strlen(c);i++)
            {
                if(c[i] >= 'a' && c[i] <= 'z')
                {
                    c[i]=c[i]-32;

                }
            } printf("%s", c);
    }
    return 0;
}
