#include <stdio.h>

struct Point
{
int x;
int y;
};

struct Point coordinateplusplus(struct Point point)
{
point.x++;
point.y++;
return point;
}

int main()
{
struct Point coord;
printf("x=");
scanf("%d",&coord.x);
printf("y=");
scanf("%d",&coord.y);
coord=coordinateplusplus(coord);
printf("x=%d\n",coord.x);
printf("y=%d\n",coord.y);
return 0;
}
