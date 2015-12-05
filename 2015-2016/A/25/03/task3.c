#include <stdio.h>
#define MAX 13

int toNumber(char);
int toCard(int);

int main(){
    int i, j, n[MAX];
    char str[MAX], temp;

    scanf("%s", str);

    for(i = 0; i < MAX; i++){
        if(str[i] >= '2' && str[i] <= '9')
            n[i] = str[i] - '0';

        else
            n[i] = toNumber(str[i]);
    }

    for(i=0; i < MAX; i++){
        for(j = 0; j < MAX - i ; j++){
            if(n[j] > n[j+1]){
                temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
        }
    }

    for(i = 0; i < MAX; i++){
        if(n[i] > 1 && n[i] < 10)
            str[i] = n[i] + '0';

       else
           str[i] = toCard(n[i]);

        printf("%c", str[i]);
    }



    return 0;
}

int toNumber(char card){

    if(card == 'T')
        return 10;

    if(card == 'J')
        return 11;

    if(card == 'Q')
       return 12;

    if(card == 'K')
        return 13;

    if(card == 'A')
        return 14;

    return 0;
}

int toCard(int number){

    if(number == 10)
        return 'T';

    if(number == 11)
        return 'J';

    if(number == 12)
        return 'Q';

    if(number == 13)
        return 'K';

    if(number == 14)
        return 'A';

    return 0;
}
