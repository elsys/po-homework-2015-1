#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100


int Pali_Hex(int );



int main()
{
	int input,x = 0;

	scanf("%d",&input);

	while(x == 0)
	{
		x = Pali_Hex(input);
		if(!x)
			input++;

	}

	printf("%X",input);
}


int Pali_Hex(int decimal)
{
	char arr_hexi[MAX];
	int i,length,palindrom_check = 1;

	sprintf(arr_hexi,"%x",decimal);
	
	length = strlen(arr_hexi);
	
	for(i = 0 ; i <  length/2;i++)
	{
		if(arr_hexi[i] != arr_hexi[length - 1 - i])
		{
				palindrom_check = 0;
				break;
		}
	}


	return palindrom_check;
}