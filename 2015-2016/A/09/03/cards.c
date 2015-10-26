#include <stdio.h>

int cardNumber(char);

int main()
{
	int i, j = 0, sorted = 0, n, m;
	char deck[13], temp;

	scanf("%s", deck);
	printf("Original: %s\n", deck);

	while (!sorted)
    {
        j++;
        sorted = 1;
        for (i = 0; i < 13 - j; i++)
        {
        	n = cardNumber(deck[i]) > 0 ? cardNumber(deck[i]) : deck[i] - '0';
        	m = cardNumber(deck[i + 1]) > 0 ? cardNumber(deck[i + 1]) : deck[i + 1] - '0';
            if (n > m)
            {
            	temp = deck[i];
            	deck[i] = deck[i + 1];
            	deck[i + 1] = temp;
                sorted = 0;
            }
        }
    }

    printf("Sorted: %s\n", deck);
	return 0;
}

int cardNumber(char card)
{
	int number = 0;
	switch (card)
	{
		case 'T':
			number = 10;
			break;
		case 'J':
			number = 11;
			break;
		case 'Q':
			number = 12;
			break;
		case 'K':
			number = 13;
			break;
		case 'A':
			number = 14;
			break;
	}

	return number;
}
