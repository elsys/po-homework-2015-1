#include<stdio.h>

int main (){

int number, zero_or_one, position;

scanf("%d %d %d", &number, &zero_or_one, &position);

int result;

if(zero_or_one == 1)
 {
 int mask = zero_or_one << position;
 result = mask | number;
 }
 else 
 {
  int mask = ~(1 << position);
  result = mask & number;
 }

printf("%d", result);

return 0;
}
