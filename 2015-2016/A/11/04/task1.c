#include<stdio.h>

int is_prime(int);

int main()
{
   int result;
   float n;
   char c;

   if(scanf("%f",&n) && (int)n == n)
   {
       c = getchar();

       if(c == '\n')
       {
           result = is_prime(n);

           if (result == 1) printf("1");

           else printf("0");
       }
       else printf("-1");
   }
   else printf("-1");

   return 0;
}

int is_prime(int a)
{
   int c;

   for (c = 2; c <= a - 1; c++)
   {
      if (a%c == 0) return 0;
   }
   if (c == a) return 1;

   return 404; /*This serves to prevent a compilation warning*/
}
