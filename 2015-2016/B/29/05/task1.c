#include<stdio.h>

void rotr(int *, int *, int *);

int main()
{	
	
	int a, b, c,rotations,counter;
	scanf("%d %d %d %d",&a,&b,&c,&rotations);
	for(counter=0; counter<rotations; counter++)
		rotr(&a, &b , &c);
	printf("%d %d %d",a,b,c);
	return 0;
}

void rotr(int *a, int *b, int *c)
{
	int temp, temp2;

	
		temp = *a;
		temp2 = *b;
		*a = *c;
		*b = temp;
		*c = temp2;

}
