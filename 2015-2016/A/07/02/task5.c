#include <stdio.h>

struct Point
{
	int x;
	int y;
};

void Coord_Increase(struct Point *);

int main()
{
    struct Point point;

	scanf("%d",&point.x);
	scanf("%d",&point.y);

	Coord_Increase(&point);
	
	printf("\n%d and %d", point.x, point.y);

    return 0;
}
void Coord_Increase(struct Point *point)
{
	(*point).x++;
	(*point).y++;
}
