#include<stdio.h>

int is_prime (int n,int i)
	{
	for(i=2;i<=n/2;i++)
		{
		if (n%i==0)
			{
			return 0;			
			}
		else return 1;
		}	

	}
int main ()
	{
	int n;
	int i;

	printf ("please insert a number to check\n");
	scanf ("%d", &n);
	if (n<2)
	{
	return -1;
	}
	else
	printf ("%d \n", is_prime(n,i) );
	return 0;
	}

