#include <stdio.h>
#include <string.h>

typedef struct
{
    int x;
    int y;
} Point;

Point pointFactory(int, int);
Point increaseCordinatesPointByOne(Point);
void printPoint(Point);

void main ()
{
    Point p;
    p = pointFactory(5, 6);
    p = increaseCordinatesPointByOne(p);
    printPoint(p);
}

Point increaseCordinatesPointByOne(Point p)
{
    p.x = p.x + 1;
    p.y = p.y + 1;
    return p;
}

void printPoint(Point p)
{
    printf("x -> %d, y -> %d", p.x, p.y);
}

Point pointFactory(int x, int y)
{
    Point p;

    p.x = x;
    p.y = y;

    return p;
}
