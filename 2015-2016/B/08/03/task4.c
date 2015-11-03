#include <stdio.h>
#include <string.h>

int main() 
{
	char num[10];

	int l, i, sum = 0;

	scanf("%s", num);

	l = strlen(num);

	for(i = 0; i < l; i++)
	{
		if(num[i] == 'C' && num[i-1] != 'I') sum += 100;
		if(num[i] == 'C' && num[i-1] == 'I') sum += 99;

		if(num[i] == 'L' && num[i-1] != 'I') sum += 50;
		if(num[i] == 'L' && num[i-1] == 'I') sum += 49;

		if(num[i] == 'X' && num[i-1] != 'I') sum += 10;
		if(num[i] == 'X' && num[i-1] == 'I') sum += 9;

		if(num[i] == 'V' && num[i-1] != 'I') sum += 5;
		if(num[i] == 'V' && num[i-1] == 'I') sum += 4;

		if(num[i] == 'I' && num[i-1] != 'I' && num[i+1] == 0) sum += 1;
		if(num[i] == 'I' && num[i-1] != 'I' && num[i+1] == 'I' && num[i+2] == 0) sum += 2;
		if(num[i] == 'I' && num[i-1] != 'I' && num[i+1] == 'I' && num[i+2] == 'I' && num[i+3] == 0) sum += 3; 

	}

	printf("%d \n\n", sum);

	return 0;
}