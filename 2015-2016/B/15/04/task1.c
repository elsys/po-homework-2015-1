#include <stdio.h>
#include <stdlib.h>
int is_prime(int);
int main()
{
int n;
printf("n=");scanf("%d",&n);
is_prime(n);
}
int is_prime(int n)
{
   if(n<2)
    printf("-1");
else
    if(n%2==0)
    printf("0");
else
    printf("1");
}
