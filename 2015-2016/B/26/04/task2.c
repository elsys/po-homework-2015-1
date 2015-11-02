#include <stdio.h>
#include <stdlib.h>

int exact_square(int num1);
int main(){

    int num1,done;
    scanf("%d",&num1);
    done=exact_square(num1);
    printf("\n%d",done);
    return 0;
}
int exact_square(int num1){
    int isit,mult=0;
    while(1){
        if(mult*mult>num1){isit=0; break;}
        if(mult*mult==num1){isit=1;break;}
            else mult++;
    }

return isit;
}
