#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pancakes [1000];
    int i = 0;

    for (i; i<1000; i++) {

        printf("Enter n:\n");
        scanf ("%d", &pancakes[i]);

        if (pancakes[i] == 42)
            break;

    }
    //Now the array is ready for sorting, but Im not sure how to do that

    return 0;
}
