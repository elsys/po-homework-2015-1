#include <stdio.h>
#include <stdlib.h>


int is_prime(int);

int main(){

    int number;
    int answer;


    scanf("%d",&number);

    answer = is_prime(number);

    printf("%d",answer);

    return 0;
}

int is_prime(number){

    int divider;


    if(number<1){

        return -1;

    }else{

    for(divider = 2;divider < number;divider++){

        if(number%divider == 0){
            return 0;
        }

    }

    return 1;

    }

}
