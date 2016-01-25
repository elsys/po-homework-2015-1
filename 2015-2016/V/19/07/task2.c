#include <stdio.h>
int checkAlive(int* , int);
void next_generation(int*, int*, int);

int main(){

    int n, current[20], next[20];

    do{
        scanf("%d", &n);
    }while(n < 0 || n > 20 );

    do
    {
        for(int i=0; i < n; i++)
            do

                scanf("%d", &current[i]);
            while(current[i] < 0 || current[i] > 1 );

    }while(current[0]!=0 || current[n-1]!=0 );

    for(int i=0; i < 1000; i++){

        for(int j = 0; j < n; j++)
            printf("%c", (current[j] == 0) ? '.' : '*');
        printf("\n");

        next_generation( &current[0], &next[0], n);

        if(checkAlive(&current[0], n)){

            for(int j = 0; j < n; j++)
                printf("%c", (current[j] == 0) ? '.' : '*');
            printf("\n");
            break;

        }

    }

    return 0;

}

void next_generation(int *current, int *next, int length){

    next[0] = 0;
    next[length-1] = 0;

    for(int i=1; i < length-1; i++){

        if(current[i-1] == current[i+1]){

            next[i] = 0;
            
        }else {

            next[i] = 1;

        }

    }

    for(int i=0; i < length-1; i++){

        current[i] = next[i];

    }

}

int checkAlive(int *current, int length){
    for(int i=0; i < length-1; i++)
        if(current[i] != 0)
            return 0;
    return 1;
}