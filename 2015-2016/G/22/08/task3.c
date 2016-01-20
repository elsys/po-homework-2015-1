#include <stdio.h>
#include <stdlib.h>

int main()
{
    int deers[200];
    int deers_count,counter,counterb,numb;
    char couple;
    scanf("%d", &deers_count);
    if(deers_count>=1 && deers_count<=200 && deers_count%2!=0){
        for(counter=0;counter<deers_count;counter++){
            scanf("%d", &deers[counter]);
            if(deers[counter]<1 || deers[counter]>100){
                printf("wrong label");
            return 0;

            }


        }
          if(deers_count==1){
            printf("%d", deers[counter]);

          }
          else{


            for(counter=0;counter<deers_count;counter++){
            couple='n';
            numb=1;
            for(counterb=0;counterb<deers_count;counterb++){
                if(counter!=counterb){
                    if(deers[counter]==deers[counterb]){
                       couple='y';
                        numb++;
                    }
                }
            }
           if(numb>2){
            printf("Number of equal labels can't be more than 2");
            return 0;
           }
            if(couple=='n'){
                printf("%d", deers[counter]);
            }
         }


     }
    }
        else printf("Wrong number");



    return 0;
}
