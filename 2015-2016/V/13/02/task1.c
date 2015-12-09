#include <stdio.h>

int main()
{
    int i;
    for(i=0;i<64;i++)
    {
        printf("%d  %c\t%d   %c\t%d   %c\t%d   %c\n",i,i,i+64,i+64,i+128,i+128,i+192,i+192);
    }
    return 0;
}
