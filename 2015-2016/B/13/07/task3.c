#include<stdio.h>

int main (){

int number;
scanf("%d", &number);

int counter = 0;
int hex[200];
int how_many = 2;


  for(; counter != how_many/2; number++)
   {
     int help_number = number;
     for(counter = 0; help_number > 0; help_number /= 16, counter++)
      { 
       hex[counter] = help_number % 16;    
      }
    
     how_many = counter;
     int reverse_counter = how_many - 1;
 
     for(counter = 0; counter < how_many/2; counter++, reverse_counter--)
      {
       if(hex[counter] != hex[reverse_counter]) break;
      }
   }


  for(counter = 0; counter < how_many; counter++)
   {
     switch(hex[counter])
      {
        case 10: printf("A");
              break;
        case 11: printf("B");
              break;
        case 12: printf("C");
              break;
        case 13: printf("D");
              break;
        case 14: printf("E");
              break;
        case 15: printf("F");
              break;
     
        default: printf("%d", hex[counter]);
              break;
      }
   }


return 0;
}
