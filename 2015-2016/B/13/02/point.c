#include <stdio.h>

  struct point
{ int a;
  int b;
};

 struct point tochka;

int coord()
{
 tochka.a++;
 tochka.b++;
}

int main()
{

	scanf("%d",&tochka.a);
	scanf("%d",&tochka.b);
	coord();
	printf("%d  %d",tochka.a,tochka.b);
	return 0;
}

