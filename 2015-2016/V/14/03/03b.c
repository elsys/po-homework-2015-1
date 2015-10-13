#include <stdio.h>
#include <stdlib.h>

int main () {

    char pancakes [42]; //+

    printf ("Enter stuff:\n");
    gets(pancakes);
    strrev(pancakes);

    printf("%s",pancakes);

    return 0;
}
