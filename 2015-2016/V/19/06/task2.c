#include <stdio.h>

int boolsquare(int);

int main() {
    int num;
    scanf("%d",&num);
    printf("%d",boolsquare(num));
    return 0;
}

int boolsquare(int num) {
    int i = 0;
    if(num == 1)
        return 1;
    for(; i <= num/2; i++) {
        if(i*i == num)
            return 1;
    }
    return 0;
}
