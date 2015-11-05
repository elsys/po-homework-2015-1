#include <stdio.h>

int is_prime(int);

void main()
{
	int a,rez;
	scanf("%d",&a);
	rez=is_prime(a);
	printf("%d",rez);
}

int is_prime(int a)
{
	int i;
	if(a<0)
		return 0;
	if(a==0)			//не знам защо, но винаги когато въведа текст вместо число a приема стойност 0
		return -1;
	for(i=2;i<a;i++)
		if(a%i==0)
			return 0;
	return 1;
}