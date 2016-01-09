#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *sled, reindeers, i, j;
    
    scanf("%d", &reindeers);
    
    sled = (int*)malloc(reindeers * sizeof(int));
    
    for (i = 0; i < reindeers; i++) {
        scanf("%d", sled + i);
    }
    
    for (i = 0; i < reindeers; i++) {
        
        if (*(sled + i) == -1) {
            continue;
        }
        
        for (j = i + 1; j < reindeers; j++) {
            if (*(sled + i) == *(sled + j)) {
                *(sled + i) = -1;
                *(sled + j) = -1;
            }
        }
    }
    
    for (i = 0; i < reindeers; i++) {
        if (*(sled + i) != -1) {
            printf("%d", *(sled + i));
            return 0;
        }
    }
    
    return 0;
}
