#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
int l,i,ok,k;
char n[100];
printf("Vuvedete tekst");
scanf("%s",n);
l=strlen(n)/2;
k=strlen(n);
for(i=0;i<l;i++)
{
if(n[i]!=n[k-i-1]){ok=2; break;}
else ok=1;
}
if(ok==2) printf("\n0\n");
if(ok==1) printf("\n1\n");
return 0;
}

