#include <stdio.h>
#include <stdlib.h>

int main(){

    int deers;
    int deer_number[200];
    int i, k;
    int rudolf = 1;
    int mara = 0;

    do{

        scanf("%d",&deers);

    }while(deers % 2 == 0);

    for(i = 0;i < deers; i++){
 
	do{

                scanf("%d",&deer_number[i]);

        }while(deer_number[i] < 1 || deer_number[i] > 100);

    }

    for(i = 0; i < deers; i++){

        for(k = i + 1; k < deers; k++){

            if(deer_number[i] == deer_number[k]){
                deer_number[i] = 0;
                deer_number[k] = 0;
            }

        }
        mara ++;

    }
    for(i = 0; i < deers; i++){
        if(deer_number[i] != 0){
            printf("%d",deer_number[i]);
        }
    }

    return 0;
