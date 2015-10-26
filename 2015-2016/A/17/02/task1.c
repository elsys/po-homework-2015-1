#include<stdio.h>
 
void main() {
   int i = 0;
   char q;
 
   for (i = 0; i < 256; i++) {
      printf("%c ", q);
      q = q + 1;
   }
}