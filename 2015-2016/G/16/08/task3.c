#include <stdio.h>
#include <stdlib.h>

int main(){

    int deers;
    int deer_number[200];
    int counter;
    int helper;
    int rudolf = 1;
    int mara = 0;

    do{

        scanf("%d",&deers);

    }while(deers % 2 == 0);

    for(counter = 0;counter < deers; counter++){

        do{

                scanf("%d",&deer_number[counter]);

        }while(deer_number[counter] < 1 || deer_number[counter] > 100);

    }

    for(counter = 0;counter < deers;counter++){

        for(helper = counter + 1;helper < deers;helper++){

            if(deer_number[counter] == deer_number[helper]){
                deer_number[counter] = 0;
                deer_number[helper] = 0;
            }

        }
        mara ++;

    }
    for(counter = 0;counter < deers;counter++){
        if(deer_number[counter] != 0){
            printf("%d",deer_number[counter]);
        }
    }

    return 0;
}

