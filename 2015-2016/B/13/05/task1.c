#include<stdio.h>

void rotr(int*, int*, int*, int);

int main()
{
     int first_number;

     int second_number; 

     int third_number; 

     int times_rotate; 

  
     scanf("%d %d %d %d", &first_number, &second_number, &third_number, &times_rotate);

     rotr( &first_number, &second_number, &third_number, times_rotate);

     printf("%d %d %d\n", first_number, second_number, third_number);

     return 0;

}


void rotr(int *first_number, int *second_number, int *third_number, int times_rotate)
{
     int helper;

     times_rotate = times_rotate % 3;
   

     for(; times_rotate  > 0; times_rotate--)
      {
        helper = *first_number;

        *first_number = *third_number;

        *third_number = *second_number;

        *second_number = helper;
      }

   


}


