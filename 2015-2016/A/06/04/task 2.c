#include <stdio.h>

int exact_square(int);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", exact_square(n));
	return 0;
}
int exact_square(int n)
{
	int i=2;

	if (n==0 || n==1)
    {
		return 1;
	}
	while(i<n)
        {
        i=i+1;
		if (i*i==n)
		{
			return 1;
		} else if (i*i> n)
		{
			break;
		}
	}

	return 0;
}
