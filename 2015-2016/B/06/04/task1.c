#include <stdio.h>
#include <string.h>
#define MAX 100

int is_prime( char* );

int main()
{
	char string[MAX];
	fgets(string, 100, stdin);
	printf(" %d ", is_prime(string) );
	return 0;
}

int is_prime(char* string)
{
	int i, l, number;
	l=strlen(string)-1;
	for(i=0; i<l; i++)
	{
		if(!(string[i]>='0' && string[i]<='9'))
		{
			return -1;
		}
	}

	number=atoi(string);
    if(number==1 || number==0) return 0;

	for(i=2;i<number;i++)
        if(number%i==0) return 0;

    return 1;
}
