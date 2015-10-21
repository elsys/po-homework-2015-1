#include <stdio.h> // Da se napravi struktura Point, v koqto ima funkciq, za da uvelichava koordinatite na tochka s 1

struct Point{
	int x;
	int y;
};

void increaseCoordinates(struct Point *);

void main()
{
	struct Point point;
	printf("Input X coordinate for the point:");
	scanf("%d", &point.x);
	printf("Input Y coordinate for the point:");
	scanf("%d", &point.y);
	increaseCoordinates(&point);
	printf("New coordinates are:\nX = %d\nY = %d\n", point.x, point.y);
}

void increaseCoordinates(struct Point *pointptr)
{
	(*pointptr).x++;
	(*pointptr).y++;
}
