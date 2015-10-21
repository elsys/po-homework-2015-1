#include <stdio.h>
int main()
{
int n,a,i,j,h;
printf("Vuvedete visochinata:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
a=2*i-1;
for(j=0;j<n-i;j++){
printf(" ");
}
for(h=0;h<a;h++){
printf("*");
}
printf("\n");
}
return 0;
}
