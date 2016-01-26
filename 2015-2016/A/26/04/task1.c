#include <stdio.h>
 
int is_prime(int);
 
int main()
{
	int n, result;
 
	scanf("%d",&n);
 
	result=is_prime(n);
 
	if (result==1)
		printf("0");
	else
		printf("1");
 
	return 0;
}
 
int is_prime(int a)
{
   int c;
 
   for (c=2; c<= a-1; c++)
   { 
      if (a%c==0)
	 return 0;
   }
   if (c==a)
      return 1;
}
