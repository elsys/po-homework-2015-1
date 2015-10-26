#include <stdio.h>
int rev();
int main()
{
  rev();
  printf("\n");
}
 int rev()
{
   char c; 
  scanf("%c",&c);
   if(c !=10) rev();
  printf("%c",c);
 }
