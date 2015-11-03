#include<stdio.h>
#include<string.h>
int main()
{
char s[27],c,s1[27],s2[27];
int i,a,b,l,k,n=0,m=0,h,j=9;
for(i=0;i<13;i++) scanf("%s",&s[i]);
l=strlen(s);
for(i=0;i<l;i++)
{
for(a=0,b=1;b<=l;a++,b++)
{
if(s[a]>s[b])
{
c=s[a];
s[a]=s[b];
s[b]=c;
}
}
}
for(i=0;i<=l;i++)
{
if(s[i]=='2') {s2[m]=s[i]; m++;}
if(s[i]=='3') {s2[m]=s[i]; m++;}
if(s[i]=='4') {s2[m]=s[i]; m++;}
if(s[i]=='5') {s2[m]=s[i]; m++;}
if(s[i]=='6') {s2[m]=s[i]; m++;}
if(s[i]=='7') {s2[m]=s[i]; m++;}
if(s[i]=='8') {s2[m]=s[i]; m++;}
if(s[i]=='9') {s2[m]=s[i]; m++;}
}
for(i=0;i<=l;i++)
{
if(s[i]=='A') {s1[n]='4'; n++;}
if(s[i]=='K') {s1[n]='3'; n++;}
if(s[i]=='Q') {s1[n]='2'; n++;}
if(s[i]=='J') {s1[n]='1'; n++;}
if(s[i]=='T') {s1[n]='0'; n++;}
}
k=strlen(s1);
for(i=0;i<k;i++)
{
for(a=0,b=1;b<=k;a++,b++)
{
if(s1[a]>s1[b])
{
c=s1[a];
s1[a]=s1[b];
s1[b]=c;
}
}
}
for(i=0;i<k;i++)
{
if(s1[i]=='4') {s1[i]='A';}
if(s1[i]=='3') {s1[i]='K';}
if(s1[i]=='2') {s1[i]='Q';}
if(s1[i]=='1') {s1[i]='J';}
if(s1[i]=='0') {s1[i]='T';}
}
h=strlen(s2);
strcat(s,s1);
for(i=0;i<k;i++,j++) s[j]=s1[i];
for(i=0;i<=l+1;i++) printf("%c",s[i]);
printf("\n");
return 0;
}
