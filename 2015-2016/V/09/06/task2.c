#include <stdio.h>

int exact_square(int);
int main() {
    int n;

    //printf("Enter number: \n");
    scanf("%d", &n);

    if(exact_square(n) == 1) {
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}

int exact_square(int n) {
    int i;

    for(i = 0; i <= n; i++) {
        if (n == i * i) {
            return 1;
        }
    }
    return 0;
}
