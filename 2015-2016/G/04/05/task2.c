 #include <stdio.h>
#include <string.h>
int main()
{
char duma[100];
int i,l=0,k=0;
printf("vyvedi duma=");
scanf("%s",duma);
l=strlen(duma);
for(i=0;i<l;i++)
{
if(duma[i]==duma[l-1])
{
k=1;
}
else
{
printf("0");
break;
}
l--;
}
if(k==1)
{
printf("%d\n",k);
}
return 0;
}
