#include <stdio.h>
#include <string.h>

int main ()

{

int i=0,l,p;
char s[13];
char s1[13];
printf("Vuvedete do 13 karti:"); gets(s);
l=strlen(s);
p=l;
s1[l]='\0';
while(l>=0)
{
if(s[l-1]=='2'){s1[i]=s[l-1]; i++;}
l--;
}
l=p;

while(p>=0)
{
if(s[p-1]=='3'){s1[i]=s[p-1]; i++;}
p--;
}
p=l;

while(l>=0)
{
if(s[l-1]=='4'){s1[i]=s[l-1]; i++;}
l--;
}
l=p;

while(p>=0)
{
if(s[p-1]=='5'){s1[i]=s[p-1]; i++;}
p--;
}
p=l;

while(l>=0)
{
if(s[l-1]=='6'){s1[i]=s[l-1]; i++;}
l--;
}
l=p;

while(p>=0)
{
if(s[p-1]=='7'){s1[i]=s[p-1]; i++;}
p--;
}
p=l;

while(l>=0)
{
if(s[l-1]=='8'){s1[i]=s[l-1]; i++;}
l--;
}
l=p;

while(p>=0)
{
if(s[p-1]=='9'){s1[i]=s[p-1]; i++;}
p--;
}
p=l;

while(l>=0)
{
if(s[l-1]=='T'){s1[i]=s[l-1]; i++;}
l--;
}
l=p;

while(p>=0)
{
if(s[p-1]=='J'){s1[i]=s[p-1]; i++;}
p--;
}
p=l;

while(l>=0)
{
if(s[l-1]=='D'){s1[i]=s[l-1]; i++;}
l--;
}
l=p;

while(p>=0)
{
if(s[p-1]=='K'){s1[i]=s[p-1]; i++;}
p--;
}
p=l;

while(l>=0)
{
if(s[l-1]=='A'){s1[i]=s[l-1]; i++;}
l--;
}


printf("%s",s1);

return 0;
}

