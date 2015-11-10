#include <stdio.h>
#include <math.h>

int exact_square(int number);
int main() {
    int number,check;

    printf("Enter a integer number:");
    check = scanf("%d", &number);
    printf("%d\n", exact_square(number));
    return 0;
}

int exact_square(int number){
    float square_check=sqrt(number);
    if (square_check/1 == (int)square_check){
        return 1;

     }else{

        return 0;
        }

};
