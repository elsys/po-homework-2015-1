#include <stdio.h>

int main () {
    int n, i, j,  c, num[1000], r, counter;

    c = getchar();
    num[0] = c;
    for(i = 0, j = 1; i < 1000; i++, j++) {
        num[i] = c;
        c = getchar();
        if(c == '\n') break;
    }

    for(i = 0; i < j; i++){
        counter = 0;
        while(num[i] == 'o') i++;
        if(i == j) break;
        for(n = i+1; n < j; n++){
            if(num[n] == num[i]){
              counter++;
              num[n] = 'o';
            }
        }

        if(!counter) printf("Number %d is not repeating \n", num[i] - 48);
        else if(counter == 1) printf("Number %d is repeating %d time! \n", num[i] - 48, counter);
        else printf("Number %d is repeating %d times!\n", num[i] - 48, counter);
    }

}



