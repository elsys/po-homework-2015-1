#include <stdio.h>

void rotr(int *a, int*b, int *c)
{
	int	 ptr, ptr2;

	ptr = *a;
	*a = *c;
	ptr2 = *b;
	*b = ptr;
	*c = ptr2;
}

int main()
{
    int a,b,c,n,i;

	scanf("%d",&a);
  scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&n);

   i=0;
    while(i<n){
        rotr(&a,&b,&c);
        ++i;
    }

	printf("%d %d %d", a,b,c);

		return 0;
}
