#include <stdio.h>

void rotr(int *a,int *b,int *c);

void main()
{
	int a,b,c,n;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&n);
	while(n>0){
		rotr(&a,&b,&c);
		n--;
	}
	printf("\n %d %d %d",a,b,c);
}
void rotr(int *a,int *b,int *c)
{
	*a=*a + *c;
	*c=*a - *c;
	*a=*a - *c;	
	
	*b=*b + *c;
	*c=*b - *c;
	*b=*b - *c;
}
