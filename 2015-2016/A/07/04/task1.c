#include <stdio.h>

int is_prime(int);

int main()
{
    int n;
    scanf ("%d", &n);
    printf("%d",is_prime(n));

    return 0;
}

int is_prime(int n){
	int i;
    if(n < 0)
        return -1;
	if (n == 1 || n == 2)
        return 0;
	for(i = 2; i < n && n % i != 0; i++);
	{
        if(i < n)
            return 0;
        else
            return 1;
	}
}
