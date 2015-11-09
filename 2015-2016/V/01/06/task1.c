#include <stdio.h>
int is_prime(int);

int main()
{
 int number;
 scanf("%d",&number);
 is_prime(number);
}
int is_prime(int number)
{
 int i=2;
 while(number%i!=0)
 {
     i++;
 }
 if(i==number)
 {
     printf("1");
 }
 if(i!=number)
 {
     if(number>0)
        printf("0");
 }
  if(number<0||number==1)
    printf("-1");
  return 1;
}
