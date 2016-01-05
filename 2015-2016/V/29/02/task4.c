#include <stdio.h>

int main() {

    int num, tmp, cnt = 0, i = 0;
    scanf("%d",&num);

    while(i < 10) {
        tmp = num;
        cnt = 0;
        while(tmp > 0) {
            if(i == tmp%10)
                cnt++;
            tmp /= 10;
        }
        if(cnt >= 2) {
            printf("%d is met exactly %d times\n",i ,cnt);
        }
        i++;
    }

    return 0;
}
