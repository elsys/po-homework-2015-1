#include <stdio.h>

struct Point{
    int x;
    int y;
};

void IncreaseC(struct Point *);

int main(){
    struct Point ptr;

    scanf("%d %d", &ptr.x, &ptr.y);

    IncreaseC(&ptr);

    printf("\n%d %d", ptr.x, ptr.y);

    return 0;
}

void IncreaseC(struct Point *ptr){
    (*ptr).x++;
    (*ptr).y++;
}
