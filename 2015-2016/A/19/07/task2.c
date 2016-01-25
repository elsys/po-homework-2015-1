#include <stdio.h>

int main()
{
	int n, v, p;
	
	scanf("%d %d %d", &n, &v, &p);

	int mask = 1 << p;
	if(v == 1)
	{
		n = mask | n;
	}
	else if(v == 0)
	{
		if(((n >> p) & 1) == 1)
			n = mask ^ n;
	}
	
	printf("%d", n);
	
	return 0;
}
