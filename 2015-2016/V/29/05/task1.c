#include <stdio.h>
#define swap(x,y) { x+=y; y=x-y; x-=y; }

void transposer(int* transpose, int size) {
    int i = 0, j;
    for(; i < size - 1; i++) {
        for(j = i + 1; j < size; j++) {
            swap(*(transpose + size*i + j), *(transpose + size*j + i));
        }
    }
}

int main() {

    int n,i = 0, j = 0;
    scanf("%d",&n);
    int transpose[n][n];
    for(; i < n; i++) {
        for(j = 0; j < n; j++)
            scanf("%d",&transpose[i][j]);
        printf("\n");
    }
    transposer(&transpose[0][0],n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf(" %d ", transpose[i][j]);
        }
        printf("\n");
    }


    return 0;
}

// 1 2
// 3 4

// 1 3
// 2 4

// 1 2 3 4
//
