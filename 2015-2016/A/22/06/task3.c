#include <stdio.h>

int main ()
{
	int i=0, j=0, temp=0;
	int n, deer[200];
	scanf("%d", &n);
	while (i!=n)
	{
		scanf("%d", &deer[i]);
		i++;
	}
	for (i=0; i!=n; i++)
	{
		temp=0;
		for (j=0; j!=n; j++)
		{
			if(deer[i]==deer[j] && i!=j)
			{
				temp=1;
				break;
			}
		}
		if(temp==0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}