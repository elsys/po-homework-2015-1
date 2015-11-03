#include <string.h> 
#include <stdio.h>
int main()
{
int j,i,l,pom;
char s[13];

fgets(s,13,stdin);
l=strlen(s);
for(i=0;i<l;i++)
{
    if(s[i]=='T')
    s[i]=110;
    if(s[i]=='J')
    s[i]=111;
    if(s[i]=='Q')
    s[i]=112;
    if(s[i]=='K')
    s[i]=113;
    if(s[i]=='A')
    s[i]=124;
}
for(i=0;i<l;i++)
  {
	for(j=0;j<l;j++)
	   if(s[j]>s[j+1])
            {
                pom=s[j];
                s[j]=s[j+1];
                s[j+1]=pom;
            }

  }
  for(i=0;i<l;i++)
{
    if(s[i]==110)
    s[i]='T';
    if(s[i]==111)
    s[i]='J';
    if(s[i]==112)
    s[i]='Q';
    if(s[i]==113)
    s[i]='K';
    if(s[i]==124)
    s[i]='A';
}

    printf("%s Deck = Sorted ",s);
 return 0;
}
