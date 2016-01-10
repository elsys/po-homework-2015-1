#include <stdio.h>


int main()
{
    char a[999];
    int i;
    for(i=0;a[i]<998;i++)
    {
    a[i]=getche();
    if (a[i]=='P')
    {
    if(a[i-1]=='O')
    {
    if(a[i-2]=='T')
    {
    if(a[i-3]=='S')
    {
    a[i]=' ';
    a[i-1]=' ';
    a[i-2]=' ';
    a[i-3]=' ';
    break;
    }
    }
    }
    }
    }
    for(i=0;i<998;i++)
    {
    if(a[i]<='z')
    {
    if(a[i]>='a')
    a[i]=a[i]-32;
    }
    }
    printf("\n %s \n", a);
    return 0;
}
