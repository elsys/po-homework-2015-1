#include<stdio.h>
int main()
{
    char x[100];
    int n;
    while(1)
    {
        scanf("%s",&x);
        if(x[0]=='S' && x[1]=='T' && x[2]=='O' && x[3]=='P')
        {
            return 0;
        }
        for(n=0;n<100;n++)
        {
            if(x[n]>='a' && x[n]<='z')
            {
                x[n]=x[n]-32;
            }

        }
        printf("\n%s", x);

    }
}
