#include <stdio.h>

#define ALPHABET_LENGHT 26
#define INPUT_TEXT_LENGHT 160
#define SPACE_CLICK_COUNT 1

int get_click_count(char *);
void init(int[]);
void to_lower_case(char *);

int main()
{
	char input_text[INPUT_TEXT_LENGHT];
	int clicks_needed = 0;

	scanf("%[^\n]s",input_text);

	clicks_needed = get_click_count(input_text);

	printf("%d",clicks_needed);

	return 0;
}

int get_click_count(char *text)
{
	int char_click_count[26];
	int click_counter = 0;
	int counter = 0;

	init(char_click_count);

	to_lower_case(text);

	for (; text[counter] != '\0'; counter++)
	{
		if (text[counter] >= 'a' && text[counter] <= 'z')
		{
			int letter_number = text[counter] - 'a';
			click_counter += char_click_count[letter_number];
		}
		else if (text[counter] == ' ')
		{
			click_counter += SPACE_CLICK_COUNT;
		}
	}	

	return click_counter;
}

void init(int char_click_count[])
{
	int current_char = 0;
	int click_count = 1;
	for (;current_char < ALPHABET_LENGHT; current_char++)
	{
		char_click_count[current_char] = click_count;
		click_count = click_count >= 3 ? 1 : click_count + 1;
		if (current_char == ('s' - 'a') - 1 || current_char == ('z' - 'a') - 1)
		{
			click_count = 4;
		}
	}
}

void to_lower_case(char *text)
{
	int current_char = 0;
	for (; text[current_char] != '\0'; current_char++)
	{
		if(text[current_char] >= 'A' && text[current_char] <= 'Z')
		{
			text[current_char] = text[current_char] + 32;
		}
	}
}
