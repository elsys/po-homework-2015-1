#include <stdio.h>

struct Point {
    int x;
    int y;
    void (*increaseCoordinates)(struct Point*);
};

void increaseCoordinates(struct Point* point);

int main()
{
    struct Point testPoint = { 1, 2, increaseCoordinates };
    printf("Before:\nx = %d\ny = %d\n\n", testPoint.x, testPoint.y);
    testPoint.increaseCoordinates(&testPoint);
    printf("After:\nx = %d\ny = %d", testPoint.x, testPoint.y);
    return 0;
}

void increaseCoordinates(struct Point* point)
{
    point->x++;
    point->y++;
}
