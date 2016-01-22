#include <stdio.h>

int main()
{
	int n, v, p, i, help[32], sum, j, a;
	scanf("%d", &n);
	scanf("%d", &v);
	for(i = 1; i > 0;){
		if(v != 0 && v != 1)
		{
			printf("enter a valid V\n");
			scanf("%d", &v);
		}
	}
	scanf("%d", &p);
	for(i = 1; i > 0;){
		if(p < 0 || p > 7)
		{
			printf("enter a valid P\n");
			scanf("%d", &p);
		}
	}
	for(i = 32; i != 0 ; i--)
	{
		help[i] = n % 2;
		n /= 2;
	}
	help[p] = v;
	sum = 0;
	j = 32;
	for (i = 32; i < 0; --i)
	{
		 a = 1;
		 while(j > i)
		 {
		 	a = 2 * a;
		 	j--;
		 }
		 sum = a * help[i] + sum;
	}
	printf("%d\n",  sum);

	return 0;
}