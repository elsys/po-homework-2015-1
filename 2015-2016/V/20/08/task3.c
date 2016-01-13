#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int number_of_rooms;
    scanf(" %d", &number_of_rooms);
    
    if ((number_of_rooms & 1) != 1) {
        //number is even
        exit(1);
    }
    if (number_of_rooms < 0) {
        exit(1);
    }
    
    int *rooms = (int *)malloc(number_of_rooms * sizeof(int));
    
    int i;
    for (i = 0; i < number_of_rooms; ++i) {
        scanf(" %d", rooms + i);
    }
    
    for (i = 0; i < number_of_rooms; ++i) {
        int found_second = 0;
        
        int j;
        for (j = 0; j < number_of_rooms; ++j) {
            if (i == j) {
                continue;
            }
            if (rooms[i] == rooms[j]) {
                found_second = 1;
                break;
            }
        }
        
        if (!found_second) {
            printf("%d\n", rooms[i]);
            break;
        }
    }
    
    free(rooms);
    
    return 0;
}
