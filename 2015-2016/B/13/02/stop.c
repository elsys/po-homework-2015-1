#include<stdio.h>
#include<string.h>
#define max 1000
int main()
{
    int l,i,p;
    char s[max];

    for(i=0;i<max;i++)
    {    s[i]=getchar();
        if(s[i]=='S') {p=i; p++;s[p]=getchar();
        if(s[p]=='T') {p++;s[p]=getchar();}
        if(s[p]=='O') {p++;s[p]=getchar();}
        if(s[p]=='P') break; }
    }

   
     
    for(l=i,i=0;i<l;i++)
    { if(s[i]>='a' && s[i]<='z')  s[i]=s[i]-32;
       printf("%c",s[i]); }
       printf("\n");

return 0;


}

