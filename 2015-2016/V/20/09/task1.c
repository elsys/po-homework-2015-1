#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int position;
    signed char number;
    
    scanf("%d %hhd", &position, &number);
    
    if ((position < 0) || (position > 7)) {
        exit(1);
    }
    
    int bit = (number & ((unsigned char)1 << position)) >> position;
    
    printf("%d\n", bit);
    
    return 0;
}
