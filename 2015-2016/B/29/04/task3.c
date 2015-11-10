#include<stdio.h>
#include<string.h>

void create_letter_distribution_diagram();

int main()
{
	create_letter_distribution_diagram();
	return 0;
}
void create_letter_distribution_diagram()
{
	char string[100000];
	char abc[26];
	char swapperc;
	int letters[26],i,counter,swapper,avr;
	fgets(string, 100000 , stdin);
	for (i=0 ; i<26 ; i++)
	{
		letters[i] = 0;
		abc[i] = 97 + i;
	}
		
	for (i=0 ; i < strlen(string); i++)
	{
		if(string[i]>='a' && string[i]<='z')
			{
				avr = string[i] - 97;
				letters[avr]++;
			}
		if(string[i]>='A' && string[i]<='Z')
			{
				avr = string[i] - 65;
				letters[avr]++;
			}
	}
	for (i=0 ; i<26 ; i++)
	{
		for(counter = 25 ; counter > i ; counter--)
		{
			if(letters[counter-1] < letters[counter])
				{
					swapper = letters[counter-1];
					letters[counter-1] = letters[counter];
					letters[counter] = swapper;
					
					swapperc = abc[counter-1];
					abc[counter-1] = abc[counter];
					abc[counter] = swapperc;
				}
		}
	}
	for(i=0; i<26; i++)
	{
		printf("%c %d \n", abc[i], letters[i]);
	}
}
