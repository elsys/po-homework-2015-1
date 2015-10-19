/*Programa za uvelichavane na koordinatite s edno na tochka ot koord. sistema*/

#include <stdio.h>
#include <stdlib.h>

struct Point{
	int x;
	int y;
};
void IncrementCoords(struct Point *);

int main(){
	struct Point p;
	p.x=0;
	p.y=0;
	struct Point *pp=&p;
	
	printf("(%d; %d)\n", p.x, p.y);
	IncrementCoords(pp);
	printf("(%d; %d)\n", p.x, p.y);
	
	return 0;
}

void IncrementCoords(struct Point *pp){
	(*pp).x++;
	(*pp).y++;
}
