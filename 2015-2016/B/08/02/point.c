#include<stdio.h>

typedef struct point point;

struct point {
	int x;
	int y;
};

int coordsplusone(point *);
int main () {
	
	point p = {0,0};
	int c;
	printf("\n Coords - x = %d, y = %d \n", p.x, p.y);
	printf("\n Do you want to increase the coords? [y/n]  ");
	c = getchar();
	while(c != 'n'){
		if(c = 'y') {
			coordsplusone(&p);
			printf("\n x = %d, y = %d", p.x, p.y);	

			printf("\n\n Do you want to increase the coords? [y/n]  ");
			getchar();
			c = getchar();
		}
	}

	printf("\n Final coords x = %d, y = %d \n\n", p.x, p.y);
	return 0;

}

int coordsplusone(point *p){
	
	(*p).x++;
	(*p).y++;
	
	return 0;
}
