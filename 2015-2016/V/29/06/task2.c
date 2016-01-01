#include <stdio.h>
#define make_positive(x) (x >= 0) ? x : (-x)

int exact_square(int);

int main() {
    int d;
    scanf("%d",&d);
    d = make_positive(d);
    printf("%d",exact_square(d));
    return 0;
}

int exact_square(int num) {
    int i = 0;
    if(num == 1)
        return 1;
    for(; i <= num/2; i++) {
        if(i*i == num)
            return 1;
    }
    return 0;
}
