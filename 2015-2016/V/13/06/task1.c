#include <stdio.h>
int is_prime(unsigned int in);

int main()
{
    unsigned int input=0;
    scanf("%d",&input);
    printf("%d",is_prime(input));
    return 0;
}

int is_prime(unsigned int in)
{
    if(in < 2) return -1;
    if(in == 2 || in == 3) return 1;
    if(in % 2 == 0 || in % 3 == 0) return 0;
    else return 1;
    return -1;
}
