#include <stdio.h>
	
typedef struct{

	int a, b; 

}point;

int main()
{
	point increment;
	
	scanf("%d %d", &increment.a, &increment.b);
	
	increment.a ++ ;
	increment.b ++ ;
	
	printf("%d %d\n", increment.a, increment.b);
	
	return 0;
}
