#include<stdio.h>

int main (){

   int deers;
   scanf("%d", &deers);
   
   int number[250];
   
   for(int counter = 0; counter < deers; counter++)
    {
      scanf("%d", &number[counter]);
    }

   for(int counter = 0; counter < deers; counter++)
    {
      for(int counter2 = 0; counter2 < deers; counter2++)
       {
         if(counter != counter2 && number[counter] == number[counter2])
           {
            number[counter] = 0;
            number[counter2] = 0;
           }
       }
        
    }

   for(int counter = 0; counter < deers; counter++)
    {
      if(number[counter] != 0)  printf("%d", number[counter]);
    }

  return 0;
}
