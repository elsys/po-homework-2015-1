#include <stdio.h>

int main(){

    int decNum1,decNum2,decNum3;
    unsigned int hexNum1,hexNum2,hexNum3;
    char c,choice;

    scanf("%c",&choice);
    if(choice=='d'){
        scanf("%d,%d,%d",&decNum1,&decNum2,&decNum3);
        printf("#%02x%02x%02x",decNum1,decNum2,decNum3);
    }
    if(choice=='h'){

        scanf(" %c%02x%02x%02x",&c,&hexNum1,&hexNum2,&hexNum3);
        printf("rgb(%d, %d, %d)",hexNum1,hexNum2,hexNum3);
    }

    return 0;
}
