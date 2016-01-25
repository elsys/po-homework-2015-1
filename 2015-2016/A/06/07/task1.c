#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("a="); scanf("%d", &a);
    printf("b="); scanf("%d", &b);
printf("%d", b>>a & 1);
return 0;
}
