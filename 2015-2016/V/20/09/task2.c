#include <stdio.h>
#include <stdlib.h>

int main() {
    
    unsigned char number;
    int value;
    int position;
    
    scanf("%hhu %d %d", &number, &value, &position);
    
    if ((position < 0) || (position > 7)) {
        exit(1);
    }
    
    if (value == 1) {
        number |= (unsigned char)1 << position;
    } else if (value == 0) {
        number &= ~((unsigned char)1 << position);
    } else {
        exit(1);
    }
    
    printf("%hhu\n", number);
    
    return 0;
}
