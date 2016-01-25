#include <stdio.h>
#include <stdlib.h>

int main()
{
    int position;
    int number;
    int result;

    scanf("%d",&position);
    scanf("%d",&number);

    number = number >> position ;
    result = number & 1 ;

    printf("%d", result);
	
    return 0;
}

