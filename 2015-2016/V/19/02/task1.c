#include <stdio.h>

int main() {

  unsigned int c = 0;

  for(; c <= 255; c++)
    printf("%d:%c\n",c,c);

  return 0;
}
