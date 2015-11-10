#include <stdio.h>
#include <math.h>
int exact_square(int in);

int main()
{
    int in;
    scanf("%d", &in);
    printf("%d", exact_square(in));
    return 0;
}

int exact_square(int in)
{
    int tmp = sqrt(in);
    if(tmp*tmp == in) return 1;
    else return 0;
}
