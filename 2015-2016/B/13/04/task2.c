#include<stdio.h>

int exact_square(int number);

int main()
{
  int number;
  int square;
  scanf("%d", &number);
     
  square = exact_square(number);
  printf("%d\n",square);
 
  return 0;
}



int exact_square(int number)
{
   int counter, square = 0;
   for(counter=0; counter < number; counter++)
   {
    if(counter * counter == number) {
       square = 1;
       break;
       }
      
   } 
   
  return square;
}
