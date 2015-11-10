#include <stdio.h>
 
int is_prime(int number)
{
   if(number<=0)
     return -1;
 
    int count,check;
    for(count=2 ;count < number ;count++)
    {
        if(number % count == 0)
            check++;
    }
    if(check == 0)
       return 0;
    else
       return 1;
}
int main()
{
   int input_number;
   scanf("%d",& input_number);
   printf("%d", is_prime(input_number));
   return 0;
}
