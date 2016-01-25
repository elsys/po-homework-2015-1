#include <stdio.h>
#define SIZE 10
void binary(int);
int bin_number[SIZE];
int main()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	binary(b);
	printf("%d", bin_number[a]);
	return 0;
}
void binary(int dec_number)
{
	for(int i=0; dec_number!=0; dec_number=dec_number/2, i++)
		bin_number[i]=dec_number%2;
}
