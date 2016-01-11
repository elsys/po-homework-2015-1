#include <stdio.h>
#define MAXDEERS 200
#define MAXNUMB 100

int InSearchOfRudolph(int*, int);

int main(){
    int i=0, input, deers[MAXDEERS], numbers[MAXNUMB];

    scanf("%d", &input);

    if((input > MAXDEERS) || (input %2 == 0))
        return 0;

    for(i = 0; i < MAXNUMB; i++)
        numbers[i] = 0;

    for(i = 0; i < input; i++){
        scanf("\n%d", &deers[i]);

        numbers[deers[i]]++;

        if(numbers[deers[i]] > 2)
            return 0;
    }
    printf("%d", InSearchOfRudolph(deers, input));

    return 0;
}

int InSearchOfRudolph(int* deers, int input){
    int k , i, check;

    for(i = 0; i < input; i++){
        check=0;

        for(k = 0; k < input; k++){
            if(deers[i] == deers[k] && i != k)
                check++;

        }

        if(check == 0)
            return deers[i];
    }


    return 0;
}
