#include <stdio.h>
#include <stdlib.h>
struct Point
{
    int x;
    int y;
};

void coordinates(struct Point *point);
int main()
{
    struct Point point;
    scanf("%d", &point.x);
    scanf("%d", &point.y);

    coordinates(&point);

    printf("{%d, %d}", point.x, point.y);
	return 0;
}
void coordinates(struct Point *point)
{

    point->x++;
    point->y++;
}

