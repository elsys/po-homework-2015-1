#include<stdio.h>

 int is_prime(char number);

 int main()
{
   char number;
   int result;
 
   scanf("%c",&number);
    
   result = is_prime(number);
   printf("%d", result);
   
  return 0;
}

 int is_prime(char number)
{
   int counter,error;

   
    if(number < 48 || number > 57 ) return error = -1;
    else number = number -'0';
    if(number == 0 || number == 1) return error = 0;
    if(number == 2) return error = 1;
         
  
   for(counter=2; counter < number; counter++)
    {
       if(number%counter == 0)
       {
         error=0; 
         break;
       }
         
       else error=1;

    }
      
    return error;
}
