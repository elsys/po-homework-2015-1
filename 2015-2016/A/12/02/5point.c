#include <stdio.h>
typedef struct point
{
	int x,y,z;
};
void up(struct point *);
void main()
{
    struct point I;
	printf("Enter coordinates: ");
	scanf("%d",&I.x);
	scanf("%d",&I.y);
	scanf("%d",&I.z);
	up(&I);
	printf("New coordinates: %d, %d, %d",I.x,I.y,I.z);
}
void up(struct point *I)
{
	(*I).x++;
	(*I).y++;
	(*I).z++;
}
// this works ;)
