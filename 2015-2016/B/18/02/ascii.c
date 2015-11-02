#include<stdio.h>

int main(){

    int counter = 0;
    
    for(counter = 0; counter <= 255; counter++)
    {
    	printf("%d --> %c\n", counter, counter);
    }

    return 0;

}
