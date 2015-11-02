#include<stdio.h>
int main()
{
int n,l,a,b=1,m;
scanf("%d",&n);
m=2*n-1;
for(l=0;l<n;l++,b=b+2)
{
for(a=0;a<(m-b)/2;a++) printf(" ");
for(a=0;a<b;a++) printf("*");
for(a=0;a<(m-b)/2;a++) printf(" ");
printf("\n");
}
return 0;
}
