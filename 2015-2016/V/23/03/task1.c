#include <stdio.h>

int main() {

    int visochina, space, zvezdi, i;

    scanf("%d", &visochina);

    for(i = 0; i <= visochina; i++) {
        for(space = visochina-i; space >= 0; space--)
            printf(" ");
        for(zvezdi = 2*i-1; zvezdi > 0; zvezdi--)
            printf("*");
        printf("\n");
    }

    return 0;
}