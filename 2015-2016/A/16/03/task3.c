#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, temp, y;
    int n[13];
    char c;

    printf("Vuvedete karti - \n");

    for(x=0;x<13;x++)
    {
        scanf("%c",&c);
        if(c>='2'&&c<='9')
        {
            n[x] = c-'0';
        }
        else
            switch(c)
            {
                case 'A':
                    n[x] = 14;
                    break;
                case 'K':
                    n[x] = 13;
                    break;
                case 'Q':
                    n[x] = 12;
                    break;
                case 'J':
                    n[x] = 11;
                    break;
                case 'T':
                    n[x] = 10;
                    break;
            }
    }

    for (x=0;x<13;x++)
    {
        for (y=0;y<13-1-x;y++)
        {
            if(n[y]>n[y+1])
            {
                temp=n[y];
                n[y]=n[y+1];
                n[y+1]=temp;
            }
        }
    }

    for(x=0;x<13;x++)
    {
        if(n[x]>=2&&n[x]<=9)
            printf("%d ",n[x]);
        else
            switch(n[x])
            {
                case 14:
                     printf("A");
                     break;
                case 13:
                    printf("K");
                    break;
                case 12:
                    printf("Q");
                    break;
                case 11:
                    printf("J");
                    break;
                case 10:
                    printf("T");
                    break;
            }
    }
    return 0;
}
