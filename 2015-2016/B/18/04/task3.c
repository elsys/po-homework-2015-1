#include <stdio.h>
#include <string.h>

void create_letter_distribution_diagram();
void sort_letter_diagram();

typedef struct
{   
    char letter;
    int count;
      
}letter_diagram;

letter_diagram  diagram[26], temp;  

int main()
{

	int index = 0;
	
	create_letter_distribution_diagram();
	for(index = 0; index < 26; index++)
	{
		printf("%c: %d\n", diagram[index].letter, diagram[index].count);
	}

	return 0;
}


void create_letter_distribution_diagram()
{
    
	int index = 0;
	int escape;
    
    for(index = 0; index < 26; index++)
    {
        diagram[index].letter = 'a' + index;
    }

	for(index = 0; (escape = getchar()) != EOF; index++)
	{
		
		if((escape >= 'a' && escape <= 'z') || (escape >= 'A' && escape <= 'Z'))
		{
			if(escape >= 'A' && escape <= 'Z')
			{
				escape = escape + 32;
			}
            
			diagram[escape - 'a'].count = diagram[escape - 'a'].count + 1;
		}
	}
	
	sort_letter_diagram();
}


void sort_letter_diagram()
{
    int first_index = 0;
    int second_index = 0;

    for (first_index = 0; first_index < 26; first_index++)
    {
        for (second_index = 0; second_index < 26; second_index++)
        {
            if (diagram[second_index].count < diagram[second_index + 1].count)
            {
                temp = diagram[second_index];
                diagram[second_index] = diagram[second_index + 1];
                diagram[second_index + 1] = temp;
            }      
            
            if(diagram[second_index].count == diagram[second_index + 1].count)
            {
                if(diagram[second_index].letter > diagram[second_index + 1].letter)
                {
                    temp = diagram[second_index];
                    diagram[second_index] = diagram[second_index + 1];
                    diagram[second_index + 1] = temp;
                }
            }
        }
    }    
}

