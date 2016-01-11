#include <stdio.h>
#include <math.h>
#define make_positive(x) (x >= 0) ? x : (-x)

/*

int getSize(int num) {
    int i = 0;
    while(num > 0) {
        i++;
        num/=10;
    }
    return i;
} */

int isPrime(int num)
{
    num = make_positive(num);
    int i = 2;
    for(; i <= sqrt(num); i++)
    {
        if(num%i == 0)
            return 0;
    }
    return 1;
}


int main()
{
    int prime;
    scanf("%d",&prime);
    printf("%d",isPrime(prime));
    return 0;
}
