#include <stdio.h>
#include <stdlib.h>
void rotr(int *a,int *b,int *c)
{
    int num;
     num = *c;
    *c = *b;
    *b = *a;
    *a = num;
}
int main()
{
    int a,b,c,n,i=0;
    printf("");scanf("%d %d %d %d",&a,&b,&c,&n);
    int *var1;
    int *var2;
    int *var3;
    var1 = &a;
    var2 = &b;
    var3 = &c;
    while (i<n)
    {
        i++;
        rotr(var1,var2,var3);
    }
    printf("%d ",*var1);
    printf("%d ",*var2);
    printf("%d",*var3);
    printf("\n");
    return 0;
}
