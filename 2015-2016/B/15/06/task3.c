#include <stdio.h>
#include <stdlib.h>
int main()
{
   int ok = 0 , deaf_num , counter = 0 , deafs[200] , rudolph_num ;
   do{
    scanf("%d",&deaf_num);
   }while(deaf_num % 2 == 0);
   for(rudolph_num = 0 ; rudolph_num < deaf_num ; rudolph_num ++)
    scanf("%d",&deafs[rudolph_num]);
   for(rudolph_num = 0 ; rudolph_num < deaf_num ; rudolph_num ++)
  {
        ok = 0;
    for(counter = 0 ; counter <= deaf_num-1 ; counter++)
    {
        if(deafs[rudolph_num] == deafs[counter])
            ok ++;
         if(counter == deaf_num-1)
         {
            if(ok == 1)
             {
                printf("\n%d",deafs[rudolph_num]); break;
             }
         }
    }
  }
   return 0 ;
}
