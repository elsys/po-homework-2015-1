#include<stdio.h>

void next_generation(int *, int *, int);

int main()
{
   int current[20]; 
   int next[20];
   int counter; 


   int length;
   scanf("%d", &length);
   length = length - 1;

  

    for(counter = 0; counter <= length ; counter++) 
      {
         scanf("%d",(current + counter));
      }
 

    for(counter = 0; counter <= length ; counter++)
      {
        if(*(current + counter) == 0) printf(".");
        if(*(current + counter) == 1) printf("*"); 
      }
   
      printf("\n");


      next_generation(current, next, length);

     return 0;
}


void next_generation(int *current, int *next, int length)
{   
    int counter = 0;
    int dead = 0;
    int times = 0;


  while(dead < length  &&  times < 1000)
    {   
       dead = 0;
   
     for(counter = 0; counter <= length ; counter++)
      {

         if(counter != 0 && counter != length )
          { 
             if(*(current + counter + 1) == 1) {
             if(*(current + counter - 1) == 0) *(next + counter) = 1;
             else *(next + counter ) = 0; 
             }


             if(*(current + counter + 1) == 0) {
             if(*(current + counter - 1) == 1) *(next + counter) = 1;
             else *(next + counter) = 0;
             }
          }
    

         else   *(next + counter) = 0; 
         
      }
   

     for(counter = 0; counter <= length ; counter++)
       {
         if(*(next + counter) == 0) {printf(".");  dead++;}
         if(*(next + counter) == 1) printf("*"); 
       }
   
       printf("\n");

     for(counter = 0; counter <= length ; counter++)
       {
         *(current + counter) = *(next + counter);
       }

       times++;

    }
  
}



