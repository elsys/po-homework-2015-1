#include <stdio.h>

int exact_square(int);

int main()
{
	int n,res;
	printf("\n input number:");
	scanf("%d",&n);
	res=exact_square(n);
	printf("\n %d",res);

	return 0;
}
int exact_spuare(int n)
{
	int i=1,b,c=0;
	while(c==0 || i<=n){
		b=i*i;
		if(b==n){
			c=1;
		}
		i++;
	}
	return c;
}
