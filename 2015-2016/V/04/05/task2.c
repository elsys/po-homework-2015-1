#include<stdio.h>
#include<string.h>

int palindrom(char c[1000]);

int main()
{
	char c[1000];

	printf("Text:");
	scanf("%s", c);
	printf("%d\n" , palindrom(c));

	return 0;
}


int palindrom(char c[1000])
{
	int i=0, lenght;

	lenght = strlen(c) - 1;
	while(lenght>i)
	{
		if(c[i]!=c[lenght])
			return 0;
		i++;
		lenght--;
	}
	return 1;
}
