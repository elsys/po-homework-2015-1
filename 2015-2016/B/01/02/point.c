#include <stdio.h>

struct point
{
	int x,y;
};

void Coord(struct point* p);

int main()
{
    struct point p;
	printf("Vavedi koordinati:");
	scanf("%d",&p.x);
	scanf("%d",&p.y);
    Coord(&p);

	printf("Promeneni koordinati: %d, %d",p.x,p.y);
	return 0;
}

void Coord(struct point* p){
 (*p).x++;
 (*p).y++;
}
