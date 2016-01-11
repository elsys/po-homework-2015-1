#include <stdio.h>
#include <string.h>
void d_h();
void h_d();
void h(char *hex, int n);

int main()
{
    char op;
    scanf("%c",&op);
    switch(op)
    {
        case 'd':
            {
                d_h();
                break;
            }
        case 'h':
            {
                h_d();
                break;
            }
    }
    return 0;
}

void d_h()
{
    int r=0, g=0, b=0;
    char hex[8];
    scanf("%d, %d, %d", &r, &g, &b);

    hex[0]='#';
    hex[2]=r%16;
    r/=16;
    hex[1]=r%16;
    hex[4]=g%16;
    g/=16;
    hex[3]=g%16;
    hex[6]=b%16;
    b/=16;
    hex[5]=b%16;
    hex[7]='\0';

    h(hex,8);
    puts(hex);

}

void h_d()
{
    int r=0, g=0, b=0;
    char hex[8];
    scanf("%s",hex);
    h(hex,6);

    r += (hex[1]-'0')*16 + (hex[2]-'0');
    g += (hex[3]-'0')*16 + (hex[4]-'0');
    b += (hex[5]-'0')*16 + (hex[6]-'0');

    printf("rgb(%d, %d, %d)",r,g,b);
}

void h(char *hex, int n)
{
    for(int i=0;i<n;i++)
    {
        switch(hex[i])
        {
            case 'a': hex[i]=10+'0'; break;
            case 'b': hex[i]=11+'0'; break;
            case 'c': hex[i]=12+'0'; break;
            case 'd': hex[i]=13+'0'; break;
            case 'e': hex[i]=14+'0'; break;
            case 'f': hex[i]=15+'0'; break;

            case 1: hex[i]='1'; break;
            case 2: hex[i]='2'; break;
            case 3: hex[i]='3'; break;
            case 4: hex[i]='4'; break;
            case 5: hex[i]='5'; break;
            case 6: hex[i]='6'; break;
            case 7: hex[i]='7'; break;
            case 8: hex[i]='8'; break;
            case 9: hex[i]='9'; break;
            case 10: hex[i]='a'; break;
            case 11: hex[i]='b'; break;
            case 12: hex[i]='c'; break;
            case 13: hex[i]='d'; break;
            case 14: hex[i]='e'; break;
            case 15: hex[i]='f'; break;
        }
    }
}
