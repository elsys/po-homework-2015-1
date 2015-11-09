#include <stdio.h>

int is_prime (int );
int main()
{
    int num ;

    scanf ( "%d" , &num);

    printf ("%d\n" ,is_prime(num) );


    return 0;
}
int is_prime ( int num )
{
    int div ;

    if (num<=0) return -1;
    if (num>1)
        for (div = 2; num % div != 0; div ++ );

    if (div == num)
            return 1;
    else
        return 0;
}
