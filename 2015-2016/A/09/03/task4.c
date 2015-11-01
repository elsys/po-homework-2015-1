#include <stdio.h>
#include <string.h>

int decimal(char);

int main()
{
	int i, result = 0;

	char roman[5];
	scanf("%s", roman);

	for (i = 0; i < strlen(roman); i++)
	{
		if (roman[i] == 'I' && (roman[i + 1] == 'X' || roman[i + 1] == 'V'))
		{
			result += decimal(roman[i + 1]) - 1;
			i++;
			continue;
		}
 		result += decimal(roman[i]);
	}

	if (result > 256)
		printf("The number should be between 1 and 256.");
	else
		printf("With decimal numerals: %d\n", result);

	return 0;
}

int decimal(char roman)
{
	switch (roman)
	{
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
	}

	return 0;
}
