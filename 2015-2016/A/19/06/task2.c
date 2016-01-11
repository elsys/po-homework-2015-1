#include <stdio.h>
#include <string.h>

int calculate(char*);

int main()
{
	char input[200];

	fgets(input, 200, stdin);

	printf("%d", calculate(input));

	return 0;
}

int calculate(char *input)
{
	int i, l, count = 0;
	int temp;

	l = strlen(input) - 1;

	for(i = 0; i < l; i++)
	{
			temp = input[i] - ('a' - 1);
			if(input[i] == ' ')
			{
				count++;
			}
			else if(((temp%3 == 0) && (input[i] < 's')) || (input[i] == 'r') || (input[i] == 'v') || (input[i] == 'y'))
			{
				count += 3;
			} 
			else if(input[i] == 's' || input[i] == 'z')
			{
				count += 4;
			} 
			else if((((temp + 2) % 3 == 0) && input[i] < 's') || (input[i] == 't') || (input[i] == 'w'))
			{
				count += 1;
			} 
			else if((((temp + 1) % 3 == 0) && input[i] < 's') || (input[i] == 'u') || (input[i] == 'x'))
			{
				count += 2;
			} 
	}

	return count;

}
/* 65~90
2. abc
3. def
4. ghi
5. jkl
6. mno - 15
7. pqrs
8. tuv 
9. wxyz 
*/
