#include <stdio.h>

struct Point
{
    int x;
    int y;
    void (*increaseCoordinates)(struct Point*);
};

void increaseCoordinates(struct Point* point);

int main()
{
    struct Point t = { 1, 2, increaseCoordinates };
    printf("Before:\nx = %d\ny = %d\n\n", t.x, t.y);
    t.increaseCoordinates(&t);
    printf("After:\nx = %d\ny = %d", t.x, t.y);
    return 0;
}

void increaseCoordinates(struct Point* point)
{
    point->x++;
    point->y++;
}
