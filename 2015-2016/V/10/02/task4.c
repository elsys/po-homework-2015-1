#include<stdio.h>
#include<stdbool.h>

int main(void){

    bool number[10] = { false };
    int digit;
    long n;

   
    scanf("%ld", &n);

    printf("povtarqshti se chisla(s):");

    while (n > 0)
    {
        digit = n % 10;
        if (number[digit] == true)
        {
            printf("%d ", digit);
        }
        number[digit] = true;
        n /= 10;
    }

      return 0;
}
