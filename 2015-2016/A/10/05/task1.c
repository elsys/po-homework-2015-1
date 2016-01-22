#include<stdio.h>
#include<stdlib.h>
void rotr(int *a, int *b, int *c)
{
	int tmp;
	tmp=*c;
	*c=*b;
	*b=*a;
	*a=tmp;
}
int main()
{
	int a,b,c,spining_times,i=0;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&spining_times);
	while(i<spining_times)
	{
		i++;
		rotr(&a,&b,&c);
	}
	printf("\n%d %d %d",a,b,c);
	return 0;
}
