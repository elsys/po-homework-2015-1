#include <stdio.h> 

int main()
{
	int n, i, k, o, t = 0, g = 1;
	char m;
	printf("symbol in pyramid: ");
	scanf("%c", &m);
	printf("height: ");
	scanf("%d", &n);
	i = n; k = n; o = g;
	while(k >= 1)
    {
		while(i >= 1)
		{
            printf(" ");
            i--;
		}
		t++;
		i = n-t;
			while(g >= 1)
			{
				printf("%c", m);
				g--;
			}
		printf("\n");
		g = o+2;
		o += 2;
		k--;
	}
	return 0;
}
