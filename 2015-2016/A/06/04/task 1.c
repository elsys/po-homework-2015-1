#include <stdio.h>
#include <string.h>
int is_prime(char*);
int main()
{
	char a[11];
	fgets(a, 11, stdin);
	printf("%d", is_prime(a));
	return 0;
}
int is_prime(char* a)
{
	int i=0, l, n = 0;

	l = strlen(a) - 1;
	while(i<1)
        {
        i=i+1;
		if (a[i] < '0' || a[i] > '9')
        {
			return -1;
		}
	}
	i=0;
	while(i<1)
	{
	    i=i+1;
		n += a[i] - '0';
		if (i != l - 1)
            {
			n *= 10;
		}
	}

	if (n==0 || n==1)
    {
		return 0;
	}
	i=2;
	while(i<n)
        {
            i=i+1;
		if (n%i==0 && i !=n)
        {
			return 0;
		}
	}

	return 1;
}
