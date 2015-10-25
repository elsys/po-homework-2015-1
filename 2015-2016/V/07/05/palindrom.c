#include <stdio.h>
#include <string.h>

int pal(char x[1000]);

void main()
{
	char a[1000];
	int b;
	printf("Vavedi tekst: ");
	scanf("%s",a);
	b=pal(a);
	printf("%d\n",b);
}

int pal(char x[1000])
{
	int m=0,n;
	n=strlen(x)-1;
	while(n>m)
	{
		if(x[m]!=x[n])
			return 0;
		m++;
		n--;
	}
	return 1;
}