#include<stdio.h>

int is_prime(int);

main()
{
   int n, result;

   printf("Enter an integer.\n");
   scanf("%d",&n);

   if( n<1 )
		return -1;

   printf( "%d" , is_prime(n) );
        return 0;

}

int is_prime(int n)
{


   int c;

   for ( c = 2 ; c <= n - 1 ; c++ )
   {
      if ( n%c == 0 )
        return 0;
   }
   if ( c == n )
        return 1;
}
