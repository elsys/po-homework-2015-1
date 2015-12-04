#include <stdio.h>
int exact_square(int n){
int i;
    for(i=0; i<=n; i++){
        if (n == i*i)
    return 1;
    }
return 0;
}

int main(){
int number;
scanf("%d", &number);
printf("%d", exact_square(number));
return 0;
}
