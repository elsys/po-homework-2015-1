#include<stdio.h>
#include<string.h>
int main()
{
int n,l,b,a;
char s[100];
scanf("%[^\n]s",s);
l=strlen(s);
for(n=0;n<l;n++)
{if(s[n]==' ') a=0; if(s[n+1]=='S') a++; if(s[n+2]=='T') a++; if(s[n+3]=='O') a++; if(s[n+4]=='P') a++; if(s[n+5]==' ') a++; if(a==5) {b=n; break;}}
for(n=0;n<b;n++) printf("%c",s[n]); printf("\n");
return 0;
}
