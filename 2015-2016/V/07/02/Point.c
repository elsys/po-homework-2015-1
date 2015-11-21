#include <stdio.h>

struct point
{
	int x;
	int y;
	int z;
}A;

void nagore();

int main()
{
	printf("\nVavedi koordinati na tochkata:");
	scanf("%d",&A.x);
	scanf("%d",&A.y);
	scanf("%d",&A.z);
	nagore();
	printf("\nNovite koordinati sa: %d, %d, %d",A.x,A.y,A.z);
	return 0;
}

void nagore()
{
	A.x++;
	A.y++;
	A.z++;
}