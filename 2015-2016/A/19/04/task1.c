#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

int is_prime(char*);

int main()
{
	char str[MAX];

	fgets(str, 100, stdin);
	printf("%d", is_prime(str));

	return 0;
}

int is_prime(char* str)
{
	int i, l, num;
	l=strlen(str)-1;
	for(i=0; i<l; i++)
	{
		if(!(str[i]>='0' && str[i]<='9')) 
		{
			return -1;
		}
	}

	num=atoi(str);

	if(num==1 || num==0) 
		return 0;
	
	for(i=2;i<num;i++)
	{
		if(num%i==0) 
			return 0;
	}

	return 1;
}
