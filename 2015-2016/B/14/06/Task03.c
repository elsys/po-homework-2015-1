#include <stdio.h>

int main()
{
    int counter1,counter2, number, i=0, Rudolf=0, deers[199];

     scanf("%d", &number);

   if(number%2 != 0)
   {
       for(counter1=0; counter1 < number; counter1++)
         {
                scanf("%d", &deers[counter1]);
                deers[counter1+1] = 0;
            }

        for( counter1 = 0; counter1 < number; counter1++, i=0, counter2=0 )
        {
                while (number >= counter2)
          {
                    if (deers[counter1] == deers[counter2])  i++;
                    if(counter2 == number && i<=1) Rudolf = deers[counter1];
                    counter2++;
                }
     }
   }
   else return 0;
    printf(" \n %d", Rudolf);
    return 0;
}
