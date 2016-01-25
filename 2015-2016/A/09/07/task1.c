#include <stdio.h>

int main() {
    
    int a, b;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    printf("%d", b & (1 << a) ? 1 : 0);
    
    return 0;
}