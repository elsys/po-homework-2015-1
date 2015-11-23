#include <stdio.h>
#include <stdlib.h>

void rotr(int *a, int *b, int *c);
int main()
{
  int rot , a , b , c , i = 0;

   scanf("%d %d %d %d", &a , &b , &c , &rot);

for(i = 0 ; i < rot ; i++)
   rotr(&a,&b,&c);

   printf("%d %d %d ", a , b , c);
 return 0;
}
void rotr (int *a , int *b , int *c)
{
 int help;

   help = *a + *b;

  *a = *c;
  *b = help - *b;
  *c = help - *b;
}
