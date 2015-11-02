#include <stdio.h>

int Functionstoinost(char);

int main()
{
    char x[14],temp;
    int a,i,y;

    scanf("%s",x);

    for(y=1;y<14;y++)
    {
        for(a=0;a<14-y;a++)
        {
            if(Functionstoinost(x[a]) > Functionstoinost(x[a+1]) );
            {
                temp=x[a];
                x[a]=x[a+1];
                x[a+1]=temp;
            }
        }
    }
    for(i=0;i<14;i++)
    {
         printf("%c", x[i]);
    }
    return 0;
}

int Functionstoinost(char x)
{
    switch(x)
    {

        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        case 'T': return 10;
        case 'J': return 11;
        case 'Q': return 12;
        case 'K': return 13;
        case 'A': return 14;
        default: return 1;

    }
}
