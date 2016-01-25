#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void increase(Point* pnt) {
	pnt->x++;
	pnt->y++;
}

int main() {
    Point x = { .x = 3, .y = 5};
    increase(&x);
    printf("%d %d",x.x,x.y);
    return 0;
}