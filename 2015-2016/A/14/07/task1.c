#include <stdio.h>
#include <stdlib.h>

int bitfinder(int a, int b);

int main()
{
    int a;
    int b;
    int x;

    scanf("%d",&a);
    scanf("%d",&b);

    x=bitfinder(a, b);

    printf("%d",x);


    return 0;
}

int bitfinder(int a, int b)
{
    b=b>>a;
    int r=b&1;
    return r;
}
