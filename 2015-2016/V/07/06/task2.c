#include <stdio.h>

int exact_square(int);

int main()
{
	int a,rez;
	scanf("%d",&a);
	rez=exact_square(a);
	printf("%d",rez);
	return rez;
}

int exact_square(int a)
{
	int i;
	if(a==1)
		return 1;
	for(i=0;i<=a/2;i++)
		if(i*i==a)
			return 1;
	return 0;
}