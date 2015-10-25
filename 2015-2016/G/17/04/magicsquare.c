#include<stdio.h>

int magic(int size,int number[size][size])
{
   int s, s1, s2;
   int flag = 0;
   int row, column = 0;
   s = 0;
   row = 0;
   while(row < size ) {
      for (column = 0; column < size; column++) {
         if (row == column)
            s = s + number[row][column];
      }
row++;
   }
 
   row = 0;
   while (row < size ) {
      s1 = 0;
      for (column = 0; column < size; column++) {
         s1 = s1 + number[row][column];
      }
      if (s == s1)
         flag = 1;
      else {
         flag = 0;
         break;
      }
row++;
   }
 
   row = 0;
   while(row < size) {
      s2 = 0;
      for (column = 0; column < size; column++) {
         s2 = s2 + number[column][row];
      }
      if (s == s2)
         flag = 1;
      else {
         flag = 0;
         break;
      }
row++;
   }
      if (flag == 1)
      return 1;
   else
      return 0;
}
 
 
void main(void)
{
   int size;
   scanf("%d",&size);
   int number[size][size];
   int row, column = 0;
   for (row = 0; row < size; row++) {
      for (column = 0; column < size; column++)
         scanf("%d", &number[row][column]);
   }
 
   if (magic(size,number))
      printf("Magic square\n");
   else
      printf("Not Magic square\n");
}
