#include <stdio.h>

int main()
{
    char a[5000], b;
	fgets(a, sizeof a, stdin);
	int i, k;
	k = strlen(a)-1;
	for(i = 0; i < k; i++, k--)
	{
		b = a[i];
		a[i] = a[k];
		a[k] = b;
	}
	printf("%s", a);
	return 0;
}
