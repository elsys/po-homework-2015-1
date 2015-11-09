#include <stdio.h>
#include <stdlib.h>
int number_square(int);

int main()
{
    int nummer;

        scanf("%d",&nummer);
        printf("%d", number_square(nummer));
        return 0;
}

int number_square(int nummer)
{
    int num;
        for(num=0; num<nummer; num++)
            {
                if(num*num==nummer)
                    {
                        return 1;
                    }
            }
    return 0;
}
