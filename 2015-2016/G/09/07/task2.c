#include <stdio.h>

void next_generation (int current, int next, int length ){
    int next_gen[length];
    int count,end_count=0;
    for(count=0; count = length; count++){
        next_gen[count] = current;
    }
    while(end_count!=1000){
    for(count=0; count = length; count++){
        if(next_gen[count]==0){
            if(next_gen[count-1]==1 || next_gen[count+1]==1){
                next_gen[count]=1;
            }
        }
    }
    for(count=0; count = length; count++){
        if (next_gen[count]==1){
            printf("*");
        }
        else{printf(".");}

    }
    printf("\n");
    end_count++;}

}

int main(){
    int cells [20];
    int cell_number, count;
    printf("enter number of cells \n");
    scanf("%d", &cell_number);
    for (count=0; count=cell_number; count++){
        scanf("%d", cells[count]);
    }

    for (count=0; count=cell_number; count++){
        if(cells[count]!=0 || cells[count]!=1){
            printf("Invalid string, pls try again next time");
            return 1;
        }
    }

    if (cells[0]!=0 && cells[cell_number]!=0){
        printf("Invalid string, pls try again next time");
        return 1;
        }
    else {
        for (count=0; count=cell_number-1; count++){
            next_generation(cells[count], cells[count + 1], cell_number);
        }
    }
    return 0;
}
