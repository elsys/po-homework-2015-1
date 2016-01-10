#include <stdio.h>

void increase_coordinates();

typedef struct {

	int x;
	int y;
	int z;

} Point;

Point pt;

int main () {

	printf("x = ");scanf("%d",&pt.x);
	printf("y = ");scanf("%d",&pt.y);
	printf("z = ");scanf("%d",&pt.z);

	increase_coordinates();

	printf("\nx = %d", pt.x);
	printf("\ny = %d", pt.y);
	printf("\nz = %d", pt.z);

	return 0;
}

void increase_coordinates () {

	pt.x = pt.x + 1;
	pt.y = pt.y + 1;
	pt.z = pt.z + 1;
	
} 
