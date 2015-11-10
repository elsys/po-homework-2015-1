#include <stdio.h>

#define MAX_INPUT_LENGHT 1000
#define ENGLISH_ALPHABET_LENGHT 26

void sort_by_freeqence();

int main()
{
	char input[MAX_INPUT_LENGHT];
	int meet_times[ENGLISH_ALPHABET_LENGHT][2];
	int counter;

	scanf("%[^\n]s",input);

	for (counter = 0; counter < ENGLISH_ALPHABET_LENGHT; counter++)
	{
		meet_times[counter][0] = counter;
		meet_times[counter][1] = 0;
	}

	counter = 0;
	while(input[counter] != '\0')
	{
		if(input[counter] >= 'a' && input[counter] <= 'z')
		{
			meet_times[input[counter]-'a'][1]++; 
		}
		else if(input[counter] >= 'A' && input[counter] <= 'Z')
		{
			meet_times[input[counter]-'A'][1]++;
		}
		counter++;
	}

	sort_by_freeqence(meet_times);

	for (counter = 0; counter < ENGLISH_ALPHABET_LENGHT; counter++)
	{
		printf("%c: %d\n",meet_times[counter][0]+'a', meet_times[counter][1]);
	}

	return 0;
}

void sort_by_freeqence(int diagram[ENGLISH_ALPHABET_LENGHT][2])
{
	int counter;
	for (counter = 0; counter < ENGLISH_ALPHABET_LENGHT; counter++)
	{
		int i;
		for (i = 0; i < ENGLISH_ALPHABET_LENGHT - 1; i++)
		{
			if (diagram[i][1] < diagram[i + 1][1])
		    {
			     int distribution;
			     int ascii;

		     	 ascii = diagram[i][0];
		     	 distribution = diagram[i][1];

		     	 diagram[i][0] = diagram[i+1][0];
		     	 diagram[i][1] = diagram[i+1][1];
		     	 diagram[i+1][0] = ascii;
		     	 diagram[i+1][1] = distribution;
		    }
		}
	}
}
