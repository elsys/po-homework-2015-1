#include <stdio.h>

void next_generation(int*,int*,int);
int isAlive(int*,int);

int main()
{
    int n;
    do
        scanf("%d",&n);
    while(n <= 0 && n > 20);

    int current[n], next[n];

    int i = 0;
    for(; i < n; i++) {
        scanf("%d",&current[i]);
        if(current[i] != 0 && current[i] != 1)
            i--;
    }

    i = 0;
    while(i < 1000 && isAlive(current,n)) {
        next_generation(current,next,n);
        int j;
        for(j = 0; j < n; j++) {
            printf("%c",(current[j] == 0) ? '.' : '*');
            current[j] = next[j];
        }
        printf("\n");
        i++;
    }

    for(i = 0; i < n; i++)
        printf("%c",(current[i] == 0) ? '.' : '*' );

    return 0;
}

int isAlive(int* current, int length) {
    int i = 0;
    for(; i < length; i++) {
        if(current[i] == 0)
            continue;
        else
            return 1;
    }
    return 0;
}

void next_generation(int* current, int* next, int length) {
    int i = 1;
    for(; i < length; i++) {
        if((current[i-1] == 1 || current[i+1] == 1) && (current[i-1] != current[i+1])) {
            next[i] = 1;
        }
        else
            next[i] = 0;
    }
    *next = 0;
    next[length-1] = 0;
}
