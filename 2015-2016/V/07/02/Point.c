#include <stdio.h>

typedef struct point
{
	int x,y,z;
}A;

void nagore();

void main()
{
	printf("\nVavedi koordinati na tochkata:");
	scanf("%d",&A.x);
	scanf("%d",&A.y);
	scanf("%d",&A.z);
	nagore();
	printf("\nNovite koordinati sa: %d, %d, %d",A.x,A.y,A.z);
}

void nagore()
{
	A.x++;
	A.y++;
	A.z++;
}