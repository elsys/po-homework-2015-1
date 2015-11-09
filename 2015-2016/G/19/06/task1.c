#include <stdio.h>
#include <string.h>
int is_prime(int n);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", is_prime(n));
    return 0;
}

int is_prime(int n)
{
    int i;
    for(i = 2; i < n;i++)
    {
        if(n % i == 0){
            return 1;
        }
    }

    return 0;
}
