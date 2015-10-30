#include <stdio.h>

typedef struct{
	int x;
	int y;
}Point;

int main()
{
	Point i;
	printf("Insert x coordinate:");
	scanf("%d",&i.x);
	printf("Insert y coordinate:");
	scanf("%d",&i.y);
	i.x++;
	i.y++;
	printf("New coordinates are:\n");
	printf("x is:%d\n",i.x);
	printf("y is:%d\n",i.y);
}
