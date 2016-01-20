#include <stdio.h>

void rotr(int *,int *,int *);

int main()
{
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

        rotr(&a, &b, &c);

    printf("%d, %d, %d", a, b, c);

return 0;
}

void rotr(int *a,int *b,int *c){

    int swap, counter, amount;

        scanf("%d", &amount);

            for(counter = 0; counter < amount; counter++){


                      swap = *a;
                        *a = *c;
                        *c = *b;
                        *b = swap;


            }

}
