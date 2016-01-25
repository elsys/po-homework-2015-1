#include<stdio.h>

int main (){

int mask, number; 

scanf("%d %d", &mask, &number);

int what_bit = (number >> mask) & 1;

printf("%d", what_bit);

return 0;
}   
