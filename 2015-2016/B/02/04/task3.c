#include <stdio.h>
#include <string.h>

int create_letter_distribution_diagram (char sentence[500]);

int main()
{

	char sentence[500];

	scanf("%[^\n]s",sentence);

	create_letter_distribution_diagram(sentence);

        return 0;
}



int create_letter_distribution_diagram (char sentence[500])
{

	int counter,letter_count[26],comparison,u=25;
	char letter[26];

	for ( counter = 0; counter < 26; counter++)
		letter_count[counter]=0;


    	for (counter = 0; counter != strlen( sentence ); counter++)
    	{
            if(sentence[counter] == 'a' || sentence[counter] == 'A') letter_count[0]++;
            else if(sentence[counter] == 'b' || sentence[counter] == 'B') letter_count[1]++;
            else if(sentence[counter] == 'c' || sentence[counter] == 'C') letter_count[2]++;
            else if(sentence[counter] == 'd' || sentence[counter] == 'D') letter_count[3]++;
            else if(sentence[counter] == 'e' || sentence[counter] == 'E') letter_count[4]++;
            else if(sentence[counter] == 'f' || sentence[counter] == 'F') letter_count[5]++;
            else if(sentence[counter] == 'g' || sentence[counter] == 'G') letter_count[6]++;
            else if(sentence[counter] == 'h' || sentence[counter] == 'H') letter_count[7]++;
            else if(sentence[counter] == 'i' || sentence[counter] == 'I') letter_count[8]++;
            else if(sentence[counter] == 'j' || sentence[counter] == 'J') letter_count[9]++;
            else if(sentence[counter] == 'k' || sentence[counter] == 'K') letter_count[10]++;
            else if(sentence[counter] == 'l' || sentence[counter] == 'L') letter_count[11]++;
            else if(sentence[counter] == 'm' || sentence[counter] == 'M') letter_count[12]++;
            else if(sentence[counter] == 'n' || sentence[counter] == 'N') letter_count[13]++;
            else if(sentence[counter] == 'o' || sentence[counter] == 'O') letter_count[14]++;
            else if(sentence[counter] == 'p' || sentence[counter] == 'P') letter_count[15]++;
            else if(sentence[counter] == 'q' || sentence[counter] == 'Q') letter_count[16]++;
            else if(sentence[counter] == 'r' || sentence[counter] == 'R') letter_count[17]++;
            else if(sentence[counter] == 's' || sentence[counter] == 'S') letter_count[18]++;
            else if(sentence[counter] == 't' || sentence[counter] == 'T') letter_count[19]++;
            else if(sentence[counter] == 'u' || sentence[counter] == 'U') letter_count[20]++;
            else if(sentence[counter] == 'v' || sentence[counter] == 'V') letter_count[21]++;
            else if(sentence[counter] == 'w' || sentence[counter] == 'W') letter_count[22]++;
            else if(sentence[counter] == 'x' || sentence[counter] == 'X') letter_count[23]++;
            else if(sentence[counter] == 'y' || sentence[counter] == 'Y') letter_count[24]++;
            else if(sentence[counter] == 'z' || sentence[counter] == 'Z') letter_count[25]++;
    	}



	for(counter = 0; counter < 26; counter++)
		letter[counter]=97+counter;



 	for(u = 25; u != 0; u--)
	{
        	for(counter = 0; counter < 26; counter++)
		{
          		if(letter_count[counter]<letter_count[counter+1])
			{
                    comparison = letter[ counter + 1 ];
                    letter[ counter + 1 ] = letter[ counter ];
                    letter[ counter ] = comparison;

                    comparison=letter_count[counter];
                    letter_count[counter]=letter_count[1+counter];
                    letter_count[1+counter]=comparison;


            }
        }
    }

	for(counter = 0; counter < 26; counter++)
    		printf("%c - %d\n", letter[counter],letter_count[counter]);
}




