#include <stdio.h>

void next_generation(int *current, int *next, int lenght);

int main ()
{
    int current[20];
    int next[20];
    int lenght;
    int counter;
    int helper = 0;
    int boolean = 0;
    
    scanf("%d",&lenght);

    for(counter=0;counter<=lenght-1;counter++)
    {
        scanf("%d",&current[counter]);
    }
 
    counter = 0;

    while(counter <= 1000)
    {
      next_generation(current,next,lenght);

      for(helper = 0; helper <= lenght - 1; helper++)
      { 
        if (current[helper] == 1)
        {
          printf("*");
          boolean  = 1;
        }
        else
        {
          printf(".");
        }
        current[helper] = next[helper];
      }
      printf("\n");
      if(boolean == 0)
      {
        break;
      }
      boolean = 0;
      
      counter++;
    }
  
    return 0;
}

void next_generation(int *current, int *next, int lenght)
{
    int counter;
    next[0] = current[0];
    next[lenght-1] = current[lenght-1];

    for(counter = 1; counter < lenght-1; counter++)
    {
      if(current[counter - 1] == current[counter + 1])
      {
        next[counter]  = 0;
      }
      else
      {
        next[counter] = 1;
      }
    }
   
}