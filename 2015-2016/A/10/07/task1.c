#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,i=0,array[8];
	do{
	scanf("%d %d",&a,&b);
	}while(a<0 || a>7 || b<0 || b>200);
	while(b>0)
	{
		array[i]=b%2;
		b=b/2;
		i++;
	}
	printf("%d",array[a]);
}