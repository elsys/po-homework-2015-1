#include <stdio.h>
int main()
{
    int a=8, b=201;
    while((a<0||a>7)&&(b<0||b>200)){
        scanf("%d %d", &a, &b);
    }

    if((b&(1<<a))==0) printf("0");
    else printf("1");
    return 0;
}
