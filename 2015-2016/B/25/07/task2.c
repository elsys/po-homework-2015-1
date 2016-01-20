#include <stdio.h>
int main()
{
    int n, v=2, p=8;
    while((p<0||p>7)&&(v!=1||v!=0)){
    scanf("%d %d %d", &n, &v, &p);}
    printf("%d", n^(1<<p));
    return 0;
}
