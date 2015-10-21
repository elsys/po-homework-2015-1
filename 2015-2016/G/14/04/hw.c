#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int i = 0;
    int nums[10];
    int check = 0; //it checks if the number is valid

    for(i = 0; i <= 9; i++){
        nums[i] = 0;
    }
    printf("vuvedi 4islo:\n");
    while((c = getchar())!='\n'){
            if(c >= '0' && c <= '9'){
                c = c - '0';

                for(i = 0; i <= 9; i++){
                    if(c == i){
                        nums[i]++;
                    }
                }

            }else{
                check = 1;
            }
    }
    if(check == 1){
        printf("invalid number");
    }else if(check == 0 ){
        printf("povtarq6tite se cifri sa:\n");
        for(i = 0; i <= 9; i++){
            if(nums[i] > 1){
                 printf("%d  ",i);
            }
        }
     }

    return 0;
}
