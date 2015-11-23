#include <stdio.h>
void rotr(int*, int*, int*);
int main()
{
	int a,b,c,n,i;
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d",&n);
	for(i=0;i<n;i++) rotr(&a,&b,&c);
	printf("%d %d %d",a,b,c);
	return 0;
}
void rotr(int *a, int *b, int *c)
{
	int temp;
	temp=*c;
	*c=*b;
	*b=*a;
	*a=temp;
}
