#include <stdio.h>

int is_prime(int);

void main(void)
{
	int n,res;
	printf("\n input number:");
	scanf("%d",&n);
	if(n<=0)
		res=-1;
	else{
		if(n==1)
			res=1;
		else
			res=is_prime(n);
	}
	printf("\n %d",res);
}
int is_prime(int n)
{
	int i=2,a=1;
	while(a!=0 && i<n){
		if(n%i==0)
			a=0;
		i++;
	}
	return a;
}
