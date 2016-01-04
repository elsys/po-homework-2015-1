#include<stdio.h>

int is_prime(int num);

int main()
{
	int num;

	printf("num=");
	scanf("%d", &num);

	printf("%d\n", is_prime(num));
	
	return 0;
}


int is_prime(int num){
	int div=2;
	
	while(num%div!=0)
	{
		div++;
	}
	if(num>=2)
	{

		if(div==num)
			return 1;
		if(div!=num)
			return 0;
	}
	else return -1;
	return 0;
}

