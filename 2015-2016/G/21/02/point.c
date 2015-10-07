#include <stdio.h>

typedef struct
{
        int x;
        int y;
}Point;


void UpCordinats(Point *dot)
{
	dot->x++;
	dot->y++;
}

int main()
{
	Point dot;
	scanf("%d",&dot.x);
	scanf("%d",&dot.y);
	UpCordinats(&dot);
	printf("%d %d\n",dot.x,dot.y);
}
