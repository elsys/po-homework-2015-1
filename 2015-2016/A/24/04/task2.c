#include <stdio.h>
#include <string.h>

int exact_square(int );

int main()
{
	int inp_num;


	scanf(" %d" , &inp_num);



	printf("%d ", exact_square(inp_num));



	return 0;
}


int exact_square(int number)
{
	int i;


	for(i=0;i<=number;i++)
	{
		if(i*i == number)
			return 1;
	}



		return 0;
}