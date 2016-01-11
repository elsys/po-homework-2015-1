#include <stdio.h>

int main()
{
    int counter,another_counter=0, number, i=0, Rudy=0, deers[199];

     scanf("n\ %d \n", &number);

   if(number%2 != 0)
   {
       for(counter=0; counter < number; counter++)
	        {
                scanf("%d", &deers[counter]);
                deers[counter+1] = 0;
            }

        for( counter = 0; counter < number; counter++, i=0, another_counter=0 )
        {
                while (number >= another_counter)
		        {
                    if (deers[counter] == deers[another_counter])  i++;
                    if(another_counter == number && i<=1) Rudy = deers[counter];
                    another_counter++;
                }
    	}
   }
   else return 0;
    printf(" \n\n %d \n\n ", Rudy);
    return 0;
}