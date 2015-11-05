#include <stdio.h>

int main()
{
        int a, b, c = 1;
    scanf("%d", &a);
    for(b = 1; b*b <= a; b++){
        if(b*b == a){
            printf("1");
            c = 0;
            break;

        }
    }
        if(c == 1){
            printf("0");
        }

return 0;
}
