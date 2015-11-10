#include <stdio.h>
#include <stdlib.h>

int exact_square(int n);

int main()
{
    int n, result;
    scanf("%d", &n);
    result = exact_square(n);

    printf("%d", result);
    return 0;
}

int exact_square(int n)
{   int rootInt;
    float rootFloat;
    rootInt = sqrt(n);
    rootFloat = sqrt(n);
    if(rootFloat - rootInt == 0)
    {
         return 1;
    }
    return 0;
}
