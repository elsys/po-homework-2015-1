#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,pos,bin;                               //543210
    scanf("%d %d %d",&num,&bin,&pos);              //100101
    if((num&(1<<pos)) == 0) num = (num|(1<<pos));  //100000
    else num = (num^(1<<pos));
    printf("%d",num);
    return 0;
}
