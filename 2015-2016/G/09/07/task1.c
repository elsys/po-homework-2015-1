#include<stdio.h>

void rotr (int *a, int *b, int *c)
{
int temp;
temp = *c;
*c = *b;
*b = *a;
*a = temp;
printf("%d %d %d\n",*a,*b,*c);
}
int main() {
	
	int a = 0;
	int b = 0;
	int c = 0;
	int n = 0;
	int i;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &n);
	for (i= 0; i<n; i++)
	{
		rotr(&a,&b,&c);
		
	}
	return 0;
}
