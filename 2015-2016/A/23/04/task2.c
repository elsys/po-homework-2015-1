#include <stdio.h>
#include <stdlib.h>
int exact_square(int n)
{
int c,i;
c=0;
for(i=1;i<=n;i++)
{
if(i*i==n)
{
c=1;
break;
}
}
return c;
}
void main(void)
{
int n,c;
scanf("%d",&n);
c=exact_square(n);
printf("%d",c);
}
