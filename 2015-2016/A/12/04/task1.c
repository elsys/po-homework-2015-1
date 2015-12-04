#include <stdio.h>
#include <string.h>
#define DIGITS 100

int is_prime(char*);

int main()
{
	char str[DIGITS];
	fgets(str,DIGITS,stdin);
	printf("%d",is_prime(str));
	return 0;
}

int is_prime(char*str)
{
	int i,l,n=0;
	l=strlen(str)-1;
	for(i=0;i<l;i++)
    {
		if(str[i]<'0' || str[i]>'9')
			return -1;
	}
	for(i=0;i<l;i++)
	{
		n+=str[i]-'0';
		if(i!=l-1)
			n*= 10;
	}
	if(n==0 || n==1)
		return 0;
	for(i=2;i<n;i++)
    {
		if(n%i==0 && i!=n)
			return 0;
	}
	return 1;
}
