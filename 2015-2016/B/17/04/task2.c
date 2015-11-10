#include <stdio.h>
#include <math.h>

int exact_square (float );
int main()
{
    float num;
    scanf("%f",&num);
    printf("%f\n",exact_square(num));

    return 0;
}
int exact_square(float num)
{
    double root ;
    root=sqrt(num);
    if(floor(root)==root)
        return 1;
    else return 0;
}
