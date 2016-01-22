#include <stdio.h>
#include <string.h>
void dec();
void hec();
void h(char *heci, int n);

int main()
{
    char dechec;
    scanf("%c",&dechec);
    switch(dechec)
    {
        case 'd':dec();break;
        case 'h':hec();break;

    }
    return 0;
}

void h(char *heci, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        switch(heci[i])
        {
            case 'a': heci[i]=10+'0'; break;
            case 'b': heci[i]=11+'0'; break;
            case 'c': heci[i]=12+'0'; break;
            case 'd': heci[i]=13+'0'; break;
            case 'e': heci[i]=14+'0'; break;
            case 'f': heci[i]=15+'0'; break;

            case 1: heci[i]='1'; break;
            case 2: heci[i]='2'; break;
            case 3: heci[i]='3'; break;
            case 4: heci[i]='4'; break;
            case 5: heci[i]='5'; break;
            case 6: heci[i]='6'; break;
            case 7: heci[i]='7'; break;
            case 8: heci[i]='8'; break;
            case 9: heci[i]='9'; break;
            case 10: heci[i]='a'; break;
            case 11: heci[i]='b'; break;
            case 12: heci[i]='c'; break;
            case 13: heci[i]='d'; break;
            case 14: heci[i]='e'; break;
            case 15: heci[i]='f'; break;
        }
    }
}

void dec()
{
    int r=0, g=0, b=0;
    char heci[8];
    scanf("%d, %d, %d", &r, &g, &b);

    heci[0]='#';
    heci[2]=r%16;r/=16;

    heci[1]=r%16;
    heci[4]=g%16;g/=16;

    heci[3]=g%16;
    heci[6]=b%16;b/=16;

    heci[5]=b%16;
    heci[7]='\0';

    h(heci,8);
    puts(heci);

}

void hec()
{
  int r=0, g=0, b=0;
    char heci[8];
    scanf("%s",heci);
    h(heci,6);

    r += (heci[1]-'0')*16 + (heci[2]-'0');
    g += (heci[3]-'0')*16 + (heci[4]-'0');
    b += (heci[5]-'0')*16 + (heci[6]-'0');

    printf("rgb(%d, %d, %d)",r,g,b);


}
