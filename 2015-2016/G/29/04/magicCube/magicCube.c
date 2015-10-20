#include <stdio.h>
#include <stdlib.h>

void main (void)
{
   int FirstRow[3];
   int SecondRow[3];
   int ThirdRow[3];
   int counter1;

   for(counter1 = 0;counter1 < 3;counter1++)
   {
      scanf("%d",& FirstRow[counter1]);
   }

   int sumOfDigits =0;
   sumOfDigits = FirstRow[0] + FirstRow[1] + FirstRow[2];
   //printf("%d",sumOfDigits);

   for(counter1 = 0;counter1 < 3;counter1++)
   {
      scanf("%d",& SecondRow[counter1]);
   }

   int sumOfDigitsTwo = SecondRow[0] + SecondRow[1] + SecondRow[2];

   if(sumOfDigits != sumOfDigitsTwo)
   {
      printf("Thw Cude Is Not Magic \n");
      printf("Reasons:\n");
      printf("1- The Second Line Of Digits Is Not Equal To The First One");
   }
   else
   {
      for(counter1 = 0;counter1 < 3;counter1++)
      {
         scanf("%d",& ThirdRow[counter1]);
      }

      int sumOfDigitsThree = ThirdRow[0] + ThirdRow[1] + ThirdRow[2];

      if(sumOfDigitsThree != sumOfDigitsTwo)
      {
         printf("Thw Cude Is Not Magic \n");
         printf("Reasons:\n");
         printf("1- The Third Line Of Digits Is Not Equal To The Second One \n");
      }
      else
      {
         int firstDiagonal = FirstRow[0] + SecondRow[1] + ThirdRow[2];

         if(firstDiagonal != sumOfDigitsThree)
         {
            printf("Thw Cude Is Not Magic \n");
            printf("Reasons:\n");
            printf("1- The First Diagonal Of Digits Facing Downwards Is Not Equal To The Third Row \n");
         }
         else
         {
           int secondDiagonal = ThirdRow[0] + SecondRow[1] + FirstRow[2];
           if(secondDiagonal !=  firstDiagonal)
           {
              printf("Thw Cude Is Not Magic \n");
              printf("Reasons:\n");
              printf("1- The Second Diagonal Of Digits Facing Upwards Is Not Equal To The firstDiagonal Facing Upwards \n");
           }
           else
           {
              printf("The Cube is Magic \n");
           }
         }
      }
   }

/*
   for(counter1 = 0;counter1 < 3;counter1++)
   {
      printf("%d", FirstRow[counter1]);
   }
*/
}





