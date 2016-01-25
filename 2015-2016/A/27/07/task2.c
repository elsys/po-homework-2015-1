#include <stdio.h>
#define SIZE 10
void dec_to_bin(int);
int bin_to_dec();
int bin_number[SIZE];
int main()
{
	int n, v, p;
	scanf("%d", &n);
	scanf("%d", &v);
	scanf("%d", &p);
	dec_to_bin(n);
	bin_number[p]=v;
	printf("%d", bin_to_dec());
	return 0;
}
void dec_to_bin(int dec_number)
{
	for(int i=0; dec_number!=0; dec_number=dec_number/2, i++)
		bin_number[i]=dec_number%2;
}
int bin_to_dec()
{
	int number=0,temp;
	for(int i=0; i<8; i++)
	{
		temp=1;
		for(int j=0; j<i; j++)
			temp=temp*2;
		number=number+bin_number[i]*temp;
	}
	return number;
}
