#include <stdio.h>
#include <stdlib.h>

int is_prime (int number) {

    int i = 1, n = 0;

    for (i; i <=number; i++) {
        if (number % i == 0) {
            n++;

        }
    }

    if (n == 2) {
        printf ("1");

    }
    else {
        printf ("0");

    }

    return 0;
}

int main() {

    int number;

    printf ("Enter number:\n");
    scanf ("%d", &number);

    is_prime (number);

    return 0;
}
