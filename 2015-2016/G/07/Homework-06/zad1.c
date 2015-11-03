#include<stdio.h>

void is_prime(int num,int pom)
{
	if(num%2==0)
		pom=1;
	else
		pom=0;
	if(num%3==0)
		pom=1;
	else
		pom=0;
	if(num%5==0)
		pom=1;
	else
		pom=0;
	if(num==2||num==3||num==5)
		pom=0;
	if(pom==0)
		printf("1\n");
	else
		printf("0\n");
}

int main()
{
	int num,pom;
	scanf("%d", &num);
	is_prime(num,pom);
	return 0;
}
