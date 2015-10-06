#include <stdio.h>

int main()
{

	int n,i,pom;
	int cifri[10] = { 0 };

	printf("vuvedi chislo");

	scanf_s("%d", &n);

	while(n>0)
	{
	
		pom = n % 10;

		cifri[pom]=cifri[pom]+1;
	
		n = n / 10;
	}

	for (i = 0; i < 10; i++)

		if(cifri[i]!=0)
		printf("cifrata %d se sreshta %d puti\n",i ,cifri[i]);

	return 0;
}
