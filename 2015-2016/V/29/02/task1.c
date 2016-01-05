#include <stdio.h>

int main()
{

    unsigned int i = 0;

    for(; i <= 255; i++)
        printf("%c:%d\n",i,i);

    return 0;
}
