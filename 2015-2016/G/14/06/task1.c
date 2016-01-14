
#include <stdio.h>

int is_prime(num){
    //printf("\n%d\n", num);

    int counter = 0;
    int check = 0;

    for(counter = 2 ; counter < num ; counter++){
        if(num % counter == 0){
            check = 1;
        }
    }

    if(check == 0){
        return 1;
    }else{
        return 0;
    }

}

int main(){

    int number;
    int result;

    scanf("%d",&number);

    result = is_prime(number);

    printf("\n%d\n",result);

    return 0;

}
