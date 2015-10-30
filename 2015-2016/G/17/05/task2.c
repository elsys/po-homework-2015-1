#include <stdio.h>
#include <string.h>
  

int main()
{
int ok=1,i=0,n;
char s[70];
scanf("%s",s);
n=strlen(s)-1;
while(i<n)
{
if(s[i]!=s[n]){ok=0;break;}
i++;n--;
}
if(ok==1)printf("1");
else printf("0");
return 0;
}
