#include <stdio.h>

int is_prime(int m);

int main()
{
	int n=0, answr;
	scanf("%d",&n);

	answr=is_prime(n);

	printf("%d",answr);

	return 0;
}


int is_prime(int m)
{
	int i,count=0;
	for(i=2;i<=m/2;i++)
	{
	        if(m%i==0)
		{
			count++;
		        break;
	        }
	}
	if(count==0 && m!= 1)return 1;

	else return 0;
}
