#include <stdio.h>

void rev();

int main() {

  rev();
  return 0;

}


void rev() {

  char c = getchar();
  
  if(c != '\n')
    rev();
  printf("%c",c);

}
