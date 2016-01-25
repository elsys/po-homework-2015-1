#include <stdio.h>
#include <stdlib.h>

int main()
{
    int the_number_of_deer[100];
    int number_of_deers_for_the_sleigh, i=0, k=0, helper=0, Rudolf_number=0;
    scanf("%d", &number_of_deers_for_the_sleigh);

    for(i=0; i<number_of_deers_for_the_sleigh; i++){
        scanf("%d", &the_number_of_deer[i]);
    }

    for(i=0; i<number_of_deers_for_the_sleigh; i++){
        for(k=0; k<number_of_deers_for_the_sleigh; k++){
               if(the_number_of_deer[k]==the_number_of_deer[i]) helper++;
        }


        if(helper==1){
            Rudolf_number = the_number_of_deer[i];
            printf("%d \n", Rudolf_number);
       }
       else helper=0;
    }

}
