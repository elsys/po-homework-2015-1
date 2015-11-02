#include<stdio.h>
int main()
{
char n[250];
int i,f,ok=0;

do
 {
i=0;
scanf("%s",n);
if(n[i]=='S' && n[i+1]=='T' && n[i+2]=='O' && n[i+3]=='P')
ok=1;
else
 {
for(f=0;f<250;f++)
     {
if(n[f]>='a'&& n[f]<='z')
{
n[f]-=32;
}
     }
printf(" %s",n);
}
i++;
}  while(ok!=1);
return 0;
}
