#include <stdio.h>
struct Point
{
    int x, y
};

void increase(struct Point *);

int main()
{
    struct Point foo;
    scanf("%d %d",&foo.x,&foo.y);
    struct Point *pfoo=&foo;
    increase(pfoo);
    printf("%d %d",foo.x,foo.y);
    return 0;
}


void increase(struct Point *pfoo)
{
    pfoo->x++;
    pfoo->y++;
}
