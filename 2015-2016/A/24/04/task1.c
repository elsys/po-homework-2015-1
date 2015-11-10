#include <stdio.h>
#include <string.h>

int is_prime(char *);


int main()
{
	char inp_num[55];


	fgets(inp_num,11,stdin);
	

	printf("%d",is_prime(inp_num));


	return 0;
}

int is_prime(char * num)
{
	int i, leng,int_num=0;
		leng = strlen( num ) - 1;
		for(i = 0 ; i < leng ; i++)
		{
			if( num [i] < '0' || num [i] > '9')
				return -1;
		}
	
		
	
	
		for(i = 0 ; i < leng ; i++)
		{
			int_num = 10*int_num+(num[i] - '0');
		}
	


	
	for(i = 2; i < int_num && int_num%i != 0  ; i++);
		




	if( int_num == i )
			return 1;
	
	
	return 0; /*dodging a :warning: control reaches end of non-void function [-Wreturn-type]: by having a default return to the main function */ 
}