#include <stdio.h>

int is_prime(int a)
{
    if(a < 1)
        return -1;
    int i;
    for(i = 2; i < a; i++)
    {
        if(a%i == 0)
        {
            if(a == 2)
                return 1;
            else
                return 0;
        }
	}
	return 1;
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", is_prime(a));
    return 0;
}
