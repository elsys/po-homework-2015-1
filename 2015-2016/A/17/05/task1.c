#include <stdio.h>

void rotate(int *a,int *b,int *c);

int main()
{
    int a,b,c,rotation,i;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&rotation);
    for(i=0;i<rotation;rotation--)
    {
        rotate(&a, &b, &c);
    }
    printf("\n%d", a);
    printf("\n%d", b);
    printf("\n%d", c);
    return 0;
}

void rotate(int *a, int *b, int *c)
{
    int beispiel;
    beispiel= *a + *b;
	*a = *c;
	*b = beispiel - *b;
	*c = beispiel - *b;
}

