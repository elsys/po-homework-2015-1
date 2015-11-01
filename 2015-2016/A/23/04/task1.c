#include <stdio.h>
#include <stdlib.h>
int is_prime(int n)
{
int c,i;
i=2;
c=1;
while(i<n)
{
if (n%i==0)
{
c=0;
break;
}
i++;
}
return c;
}
void main(void)
{
int n,c;
scanf("%d",&n);
c=is_prime(n);
printf("%d",c);
return 0;
}
