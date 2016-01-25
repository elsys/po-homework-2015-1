#include <stdio.h>


int is_is_palindrom(int n);

int main()

{
	int number;

	scanf("%d", &number);
	
	if(is_is_palindrom(number) == 1)
	{
		printf("%X\n", number);
		return 1;
	}

	do
	{
		number++;
	}while(is_is_palindrom(number) == 0);

	printf("%X\n", number);
	
	return 2;
}

int is_is_palindrom(int n)

{
	int l = 0, h, count = 1, count2 = 3;

	do
	{
		l++;	
	}while(n >> l !=0);

	while(l % 4 != 0)
		l++;

	h = l / 2;

	while(l - count > h)
	{
		if((n & (1 << (l - count))) >> (l - count) != ( n & (1 << count2)) >> count2)
		{
			return 0;		
		}	

		count++;

		if((count - 1) % 4 == 0)
			count2 += 8;

		count2--;
	}
	return 1;
}

