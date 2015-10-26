#include<stdio.h>
#include<string.h>
int main()
{
int l,a,b=1,c;
char s[100];
scanf("%[^\n]s",s);
l=strlen(s);
for(a=0;a<=(l-1)/2;a++,b++)
{
c=s[a];
s[a]=s[l-b];
s[l-b]=c;
}
for(a=0;a<l;a++) printf("%c",s[a]);
printf("\n");
return 0;
}
