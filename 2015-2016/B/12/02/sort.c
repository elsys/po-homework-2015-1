#include<stdio.h>
int main()
{
int n,a,b,c,k;
int m[1000];
for(n=0;n<1000;n++)
{scanf("%d",&m[n]); if(m[n]==42) break; k++;}
for(n=0;n<=k;n++)
{for(a=0,b=1;b<=k;a++,b++) {if(m[a]>m[b]){ c=m[a]; m[a]=m[b]; m[b]=c;}}}
for(n=0;n<k;n++) printf("\n %d",m[n]);
return 0;
}
