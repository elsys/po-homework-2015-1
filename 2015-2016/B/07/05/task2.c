#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void next_generation(int *current, int *next, int lenght);

int main(){
    int current[21],next[21],lenght,len_help;
    for(len_help=0;len_help<20;len_help++){
        current[len_help] = 0;
        next[len_help] = 0;
    }
    scanf("%d", &lenght);
    for(len_help=1;len_help<=lenght;len_help++){
        scanf("%d", &current[len_help]);
    }
    next_generation(current, next, lenght);
    return 0;
}

void next_generation(int *current, int *next, int lenght){
    int len_help,end=0,brek=0;
    while (end!=lenght){
        end = 0;
        *(current+0) = *(current+2);
        *(current+lenght+1) = *(current+lenght-1);
        for(len_help=1;len_help<=lenght;len_help++){
            if(*(current+len_help) == 0){
                end++;
                printf(".");
            } else printf("*");

            if(*(current+len_help-1) == *(current+len_help+1)) {
                *(next+len_help) = 0;
            } else  *(next+len_help) = 1;
        }
        printf("\n");
        for(len_help=1;len_help<=lenght;len_help++){
            *(current+len_help) = *(next+len_help);
        }
        if(brek == 1000) break;
        else brek++;
    }
}
