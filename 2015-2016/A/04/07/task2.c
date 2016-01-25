#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number , Make , position ;
    int result;

    scanf("%d", &number);
    scanf("%d", &Make);
    scanf("%d", &position);

    result = -1;

    if(Make==0)
    {
        result = number & ~(1 << position);
    }else if(Make==1)
    {
        result = number | (1 << position);
    }

    printf("%d",result);

    return 0;
}


