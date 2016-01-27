#include <stdio.h>

typedef struct
 {
    int x;
    int y;
}
point;

void pointup(point*);

int main() 
{
    point x;
    x.x = 5;
    x.y = 4;
    pointup(&x);
    printf("%d %d\n",x.x,x.y);
    return 0;
}

void pointup(point* point) 
{
    point->x++;
    point->y++;
}
