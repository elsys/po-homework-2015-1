#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,v,p,i=0,array[8],a=0,j=0;
	do{
	scanf("%d %d %d",&n,&v,&p);
	}while(n<0 || v<0 || v>1 || p<0 || p>7);
	while(n>0)
	{
		array[i]=n%2;
		n=n/2;
		i++;
	}
	array[p]=v;
	for(j=i-1;j>=0;j--)
	{
		a=(a*2)+array[j];
	}
	printf("%d",a);
}