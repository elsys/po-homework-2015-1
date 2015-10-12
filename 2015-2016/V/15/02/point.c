#include <stdio.h>

typedef struct {
	int x;
	int y;
	void (* add)( void* this);
	void (* subb)( void* this );
	//int (* mult)( void* this );
	int (* print) (int X ,int Y); // if there isn't ; there are no errors(only warnings)!Why?
}Point;

void Add(void* this)
{
	Point* THIS = (Point*)this;
	THIS->x++;
	THIS->y++;
}

void Subb(void* this)
{
	Point* This = (Point*)this;
	This->x--;
	This->y--;
}

int print(int X, int Y)
{
	int result = (X == 0 && Y == 0) ? 0 : 1;
	printf("%d %d",X,Y);
	return result;
}

void pointer_init(Point* this)
{
	this->add = &Add;
	this->subb = &Subb;
	this->print = &print;
}

int main()
{
	Point x;
	pointer_init(&x);
	x.x = 3;
	x.y = 4;
	printf("x y\n%d %d\n",x.x,x.y);
	(x.add)(&x);
	printf("%d %d\n",x.x,x.y);
	(x.add)(&x);
	printf("%d %d\n",x.x,x.y);
	(x.subb)(&x);
	printf("\nResult:%d\n",(x.print)(x.x,x.y));



	Point* y = &x;
	pointer_init(y);
	y->x = 0;
	y->y = 0;
	printf("\nResult:%d\n0 means that the cordinates are x = 0 and y = 0\n",(y->print)(x.x,y->y)); //y = &x
	(y->add)(y);
	(y->print)(y->x,y->y);
	printf("\n");
	return 0;
}
