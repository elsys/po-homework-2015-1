#include <stdio.h>

int main() {

    int cifra, broqch = 0, i = 0;
    scanf("%d",&cifra);

    while(i < 10) {
        int tmp = cifra;
        broqch = 0;
        while(tmp > 0) {
            if(i == tmp%10)
                broqch++;
            tmp /= 10;
        }
        if(broqch >= 2) {
            printf("%d : %d times\n",i ,broqch);
        }
        i++;
    }

    return 0;
}
