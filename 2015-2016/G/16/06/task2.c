#include <stdio.h>
#include <stdlib.h>


int exact_square(int);


int main(){

    int answer;
    int number;

    scanf("%d",&number);

    answer = exact_square(number);

    printf("%d",answer);


    return 0;

}

int exact_square(int number){

    int multiplier;
    int multiplication;

    if(number == 0){
        return 1;
    }

    if(number < 0){

        return -1;

    }else{

        for(multiplier = 1;multiplication < number;multiplier++){

            multiplication = multiplier * multiplier;



            if(multiplication == number){
                return 1;
            }

        }

    }
    return 0;
}
