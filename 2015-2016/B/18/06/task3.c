#include <stdio.h>

int main()
{
   int nums = 0;
   int index, compare;
   int not_rudolf = 0;
   int arr[200];
   
   scanf("%d", &nums);
   
   for (index = 0; index < nums; index++)
   {
      scanf("%d", &arr[index]);
   }
   
   for (index = 0; index < nums; index++)
   {
      for (compare = 0; compare < nums; compare++)
      {
        if (arr[index] == arr[compare])
        {
            not_rudolf++;
        }
      }
      
      if (not_rudolf == 1)
      {
          break;          
      }
      
      else
      {
          not_rudolf = 0;
      }
   }
   
   printf("%d\n", arr[index]);
   
   return 0;
}

