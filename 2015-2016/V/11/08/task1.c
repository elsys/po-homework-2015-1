#include <stdio.h>
void decimal();
void hexadecimal();
void h(char *color, int n);
int main()
{
    char type;
    scanf("%c",&type);
    switch(type)
    {
        case 'd':decimal();break;
        case 'h':hexadecimal();break;
    }
    return 0;
}
void h(char *color, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        switch(color[i])
        {
            case 'a': color[i]=10+'0'; break;
            case 'b': color[i]=11+'0'; break;
            case 'c': color[i]=12+'0'; break;
            case 'd': color[i]=13+'0'; break;
            case 'e': color[i]=14+'0'; break;
            case 'f': color[i]=15+'0'; break;
            case 1: color[i]='1'; break;
            case 2: color[i]='2'; break;
            case 3: color[i]='3'; break;
            case 4: color[i]='4'; break;
            case 5: color[i]='5'; break;
            case 6: color[i]='6'; break;
            case 7: color[i]='7'; break;
            case 8: color[i]='8'; break;
            case 9: color[i]='9'; break;
            case 10: color[i]='a'; break;
            case 11: color[i]='b'; break;
            case 12: color[i]='c'; break;
            case 13: color[i]='d'; break;
            case 14: color[i]='e'; break;
            case 15: color[i]='f'; break;
        }
    }
}
void decimal()
{
    int r=0, g=0, b=0;
    char color[8];
    scanf("%d, %d, %d", &r, &g, &b);
    color[0]='#';
    color[2]=r%16;r/=16;
    color[1]=r%16;
    color[4]=g%16;g/=16;
    color[3]=g%16;
    color[6]=b%16;b/=16;
    color[5]=b%16;
    color[7]='\0';
    h(color,8);
    puts(color);
}
void hexadecimal()
{
  int r=0, g=0, b=0;
    char color[8];
    scanf("%s",color);
    h(color,6);
    r += (color[1]-'0')*16 + (color[2]-'0');
    g += (color[3]-'0')*16 + (color[4]-'0');
    b += (color[5]-'0')*16 + (color[6]-'0');
    printf("rgb(%d, %d, %d)\n",r,g,b);
}
