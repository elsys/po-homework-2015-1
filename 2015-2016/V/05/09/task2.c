#include <stdio.h>
 
 int main()
 {
 	int rev = 0,p,n,v;
 	scanf("%d",&n);
 	do
 	{
 		scanf("%d",&v);
 	}
 	while(v < 0 || v > 1);
 	do
 	{
 		scanf("%d",&p);
 	}
 	while(p < 0 || p > 7);
 	if(v == 1)
 	{
 		rev = (n | (1 << p));
 	}
 	else
 	{
 		rev = (n & (~(1 << p)));
 	}
 	printf("%d\n",rev);
 } 
