#include <stdio.h>
#include <stdlib.h>

int exact_square (int n) {

    int i = 0, es = 0;

    for (i; i<n; i++) {
        if (i*i == n) {
            es = 1;

        }
    }

    if (es == 0) {
        printf ("0");

    }
    else {
        printf ("1");


    }
}

int main()
{
    int number;

    printf("Enter number:\n");
    scanf("%d",&number);

    exact_square (number);

    return 0;
}
