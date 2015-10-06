#include <stdio.h>

typedef struct point
{
	int x,y,z;
};

void nagore(struct point * m);

void main()
{
	struct point A;
	struct point* t;
	printf("\nVavedi koordinati na tochkata:");
	scanf("%d",A.x);
	scanf("%d",A.y);
	scanf("%d",A.z);
	t=&A;
	nagore(t);
	printf("\nNovite koordinati sa: %d, %d, %d",A.x,A.y,A.z);
}

void nagore(struct point * m)
{
	(*m).x++;
	(*m).y++;
	(*m).z++;
}