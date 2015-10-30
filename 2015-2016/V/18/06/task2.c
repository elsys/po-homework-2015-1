#include<stdio.h>

int exact_square ( int );

main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf( "%d" , exact_square(n) );

    return 0;
}

int exact_square ( int n )
{
    int a;
     for(a = 0; a <= n; a++)
    {
        if (n == a * a)
        {
            return 1;
        }
    }
    return 0;

}
