#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char i, d[3][3], s[8];
    int a,b,c,k,m;
    int ar[3];
    scanf("%c",&i);

    if(i=='h')
    {
        scanf("%s",s);

        for(k=1;k<7;k+=2)
        {
            for(m=0;m<2;m++)
            {
                d[(k-1)/2][m]=s[k+m];
            }
            d[(k-1)/2][m]='\0';
        }

        for(k=0;k<3;k++)
        {
            ar[k]=strtol(d[k], NULL, 16);
        }

        printf("rgb(%d, %d, %d)",ar[0], ar[1], ar[2]);
    }


    if(i=='d')
    {
        scanf("%d, %d, %d",&a,&b,&c);
        printf("#%x%x%x",a,b,c);
    }
return 0;
}

