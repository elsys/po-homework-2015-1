#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char hex[10];
    int blyat;

    scanf("%d",&blyat);

    while (2==2)
    {
        sprintf(hex, "%X", blyat);
        int i;
        int n;

        for (i=0; i<10;i++)
        {
            n=i;
            if(hex[i]=='\0')
            {
                break;
            }
        }

        char hx[n];
        char rev[n];
        int start=0;
        for (i=0;i<n;i++)
        {
            hx[i]=hex[i];
        }

        for(i=n-1; i>=0; i--)
        {
            rev[start]=hx[i];
            start++;
        }

        if(strcmp(hx,rev)==0)
        {
            hx[n]='\0';
            printf("%s",hx);
            break;
        }
        blyat++;
    }
return 0;
}
