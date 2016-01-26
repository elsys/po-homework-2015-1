#include <stdio.h>

int main (){
    
int number, digit;
int a_digit[] = {0,0,0,0,0,0,0,0,0,0};

printf(":\n");
scanf("%d", &number);


printf(":\n");

while (number){
  digit = number % 10;
  if (a_digit[digit]) printf("%d " , digit);
  
  a_digit[digit] = 1;
  number /= 10;
}

return 0;
}
