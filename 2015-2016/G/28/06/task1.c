#include <stdio.h>

int is_prime (int number);

int main()
{
   int number;
   scanf("%d",&number);
   printf("%d", is_prime(number));

   return 0;
}

int is_prime(int number)
{
   if(number <= 0)
    {
        //printf("-1");
        return -1;
       //printf("\n");
    }
   int counter;
   int prime_checker;
    for(counter=2 ;counter < number ;counter++)
    {
        if(number % counter == 0)
        {
            prime_checker++;
        }
    }


    if(prime_checker == 0)
    {
       return 0;
     //  printf("\n");
    }
    else
    {    
       return 1;
      // printf("\n");
    }
   
}
