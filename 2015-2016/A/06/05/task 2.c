#include <stdio.h>
void next_generation(int*, int*, int);
void print_generation(int*, int);
int is_alive(int*, int);
int main()
{
	int a[20], b[20], c, l;
	scanf("%d", &c);

	if (c <= 0) {
		return 0;
	} else if (c > 20)
	{
		c=20;
	}

	l=c;
	while (c>0)
    {
		scanf("%d", &a[l-c]);
		c--;
	}

	print_generation(a,l);

	if (is_alive(a,l))
        {
		while (c < 999 && is_alive(b,l));
		{
			c=c+1;
			next_generation(a,b,l);
			print_generation(b,l);
		}
	}
	return 0;
}

void next_generation(int *a, int *b, int l)
{
	int i;
	i=1;
    b[0]=0;
	b[l-1]=0;
    while(i<l-1)
    {
        i=i+1;
		if (a[i - 1]==1 || a[i + 1]==1)
		{
			if (!(a[i - 1]==1 && a[i + 1]==1))
			{
				b[i]=1;
				continue;
			}
		}
		b[i]=0;
	}
	i=0;
	while(i<l);
    {
        i=i+1;
		a[i]=b[i];
	}
}

void print_generation(int *g, int l)
{

	int i=0;
	for (; i < l; i++)
        {
		printf("%c", g[i] == 0 ? '.' : '*');
	}

	printf("\n");
}

int is_alive(int *g, int l)
{
	int i=0;
	for (; i < l; i=i+1)
        {
		if (g[i]==1)
		{
			return 1;
		}
	}
	return 0;
}
