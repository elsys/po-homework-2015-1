#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,pos;
    scanf("%d %d",&pos,&num);
    if((num&(1<<pos)) == 0) printf("0");
    else printf("1");
    return 0;
}
