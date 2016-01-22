#include <stdio.h>
void rotr(int *a, int *b, int *c)
{
    int e;
    int d;

        e = *a;
        d = *b;

        *a = *c;
        *b = e;
        *c = d;
}
int main()
{
    int a;
	int b;
	int c;
    int n,i=0;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&n);

    for(;i < n;i++){
       rotr(&a,&b,&c);
    }
    printf("%d",a);
	printf("%d",b);
	printf("%d",c);
    return 0;
}
