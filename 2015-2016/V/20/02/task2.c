#include<stdio.h>
int main()
{
    char m[100];
    int j=0;
        do{
            scanf("\n%s",m);
            if(m[0]=='S'&&m[1]=='T'&&m[2]=='O'&&m[3]=='P')
                break;
            else
            {
              
                for(;j<100;j++)
                {
                    if(m[j]>='a'&& m[j]<='z')
                    {
                        m[j]-=32;
                    }
                }
            printf("\n%s",m);
            }
        }while(1);
    return 0;
}
