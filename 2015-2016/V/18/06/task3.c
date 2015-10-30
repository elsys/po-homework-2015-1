#include <stdio.h>

void find_frequency(char string[], int count[]);

int main()
{
    char string[100000];
    int i, count[26] = {0};

    printf("Input a string\n");
    gets(string);

    find_frequency(string, count);

    printf("Character Count\n");

    for(i = 0 ; i < 26 ; i++)
    {
        printf("%c \t  %d\n", i + 'a', count[i]);
    }
    return 0;
}

void find_frequency(char string[], int count[])
{
    int i,j,swap1,swap2;

    for(i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z' )
        {
            count[string[i]-'a']++;
        }
    }

    for(i = 0 ; i < 26 ; i++)
    {
        for ( j = 0; j < 26; j ++ )
        {
            if ( string [ i ] > string [ j ] ){
				swap1 = string [ i ];
				string [ i ] = string [ j ];
				string [ j ] = swap1;

				swap2 = count [ i ];
				count [ i ] = count [ j ];
				count [ j ] = swap2;
                }
			if ( string [ i ] == string [ j ] ){
				if ( count [ i ] < count [ j ] ){
					swap1 = string [ i ];
				string [ i ] = string [ j ];
				string [ j ] = swap1;

					swap2 = count [ i ];
					string [ i ] = string [ j ];
					string [ j ] = swap2;
				}
            }
        }

        for ( i = 0; i < 26; i ++ ){
            printf( "%c: %d" , count [ i ], string [ i ] );
            printf( "\n" );
        }

    }   
}
