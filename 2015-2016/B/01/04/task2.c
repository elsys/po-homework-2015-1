#include <stdio.h>

int exact_square(int sq){

float counter;

 counter=sq;

    while(counter!=0)
    {
        if(sq/counter==counter){
        printf("1");
        break;}

        counter--;
    }

 if(counter==0) printf("0");

 return 0;
}

int main(){

int sq;

 scanf("%d",&sq);

 exact_square(sq);

    return 0;
}
