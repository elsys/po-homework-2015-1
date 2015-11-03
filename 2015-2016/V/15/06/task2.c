#include <stdio.h>
#include <stdlib.h>

typedef enum {false,true} bool;

bool exact_square(const unsigned int);

int main()
{
    unsigned int num;
    do
        scanf("%u",&num);
    while(num <= 0);
    printf("%d",(exact_square(num)));
    return 0;
}

bool exact_square(const unsigned int num) {
	
	if(num == 1) return true;

    int i = 1;
    for(; i <= num/2; i++)
        if(i*i == num)
            return true;

    return false;
}
