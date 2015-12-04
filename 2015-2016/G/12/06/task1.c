#include <stdio.h>

int is_prime(int d);

int main(){

    float num;
    int a, b = 1, c;

    if(!(scanf("%f",&num))){
        printf("-1");
        b = 0;
    }
        a = num;

        if(a != num && b){
            printf("-1");
            b = 0;
        }
            if(b){
                c = is_prime(a);
                 printf("%d", c);
            }



return 0;
}

int is_prime(int d){

    int e = 2, f = 1;
    for(; e<=d/2; e++){
        if(d % e == 0){
            return 0;
                f = 0;
            break;
        }
    }
        if(f){
            return 1;
        }

}
