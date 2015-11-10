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
	int *new_a, *new_b, *new_c;
	printf("a=");scanf("%d",&a);
	printf("b=");scanf("%d",&b);
	printf("c=");scanf("%d",&c);
	printf("spining_times=");scanf("%d",&spining_times);
	new_a=&a;
	new_b=&b;
	new_c=&c;
	while(i<spining_times)
	{
		i++;
		rotr(new_a, new_b, new_c);
	}
	printf("\nnew_a=%d",*new_a);
	printf("\nnew_b=%d",*new_b);
	printf("\nnew_c=%d",*new_c);
	return 0;
}
