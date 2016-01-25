#include <stdio.h>

int sqrtn(int);

int main() {
    int d;
    scanf("%d",&d);
    printf("%d",sqrtn(d));
    return 0;
}

int sqrtn(int num) {
    int i = 0;
    if(num == 1)
        return 1;
    for(; i <= num/2; i++) {
        if(i*i == num)
            return 1;
    }
    return 0;
}
