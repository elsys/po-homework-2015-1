#include<stdio.h>

int is_prime(int);

int main()
{
   int number, result;
   scanf("%d",&number);

   result = is_prime(number);

   printf("%d", result);

   return 0;
}

int is_prime(int a)
{
   int divisor;

   for ( divisor = 2 ; divisor <= a - 1 ; divisor++ )
   {
      if ( a%divisor == 0 )
	 return 0;
   }
   if ( divisor == a )
      return 1;

    return 0;
}
