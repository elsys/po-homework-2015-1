#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void create_letter_distribution_diagram(void);

void main(void)
{
    create_letter_distribution_diagram();
}

void create_letter_distribution_diagram(void)
{
    char input[5000];
    int occurences[27];
    char occurences_chars[27];
    int n, c, z;
    n = 1;
    while(n!=27)
    {
        occurences_chars[n] = 96 + n;
        printf("%c", occurences_chars[n]);
        n++;
    }
    char selector;
    fgets(input, 5000, stdin);
    c = 1;
    z = 0;
    n = strlen(input);
    //------------------------
    //Start of recording process
    while(c!=n)
    {
        selector = input[c];
        if(selector!=' ')
        {
            if(selector>64 && selector<91)
            {
                z = selector - 64;
                occurences[z]++;
            }
            if(selector>96 && selector<123)
            {
                z = selector - 96;
                occurences[z]++;
            }
        }
        c++;
    }
    //End of recording process
    //------------------------
    //Start of sorting process
    int swap;
    char charswap;
    for (c = 1 ; c < ( 27 - 1 ); c++)
      {
        for (z = 1 ; z < 27 - c - 1; z++)
        {
          if (occurences[z] < occurences[z+1])
          {
            swap                  = occurences[z];
            occurences[z]         = occurences[z+1];
            occurences[z+1]       = swap;
            charswap              = occurences_chars[z];
            occurences_chars[z]   = occurences_chars[z+1];
            occurences_chars[z+1] = charswap;
          }
          if (occurences[z] == occurences[z+1])
          {
              if(occurences_chars[z] > occurences_chars[z+1])
              {
                swap                  = occurences[z];
                occurences[z]         = occurences[z+1];
                occurences[z+1]       = swap;
                charswap              = occurences_chars[z];
                occurences_chars[z]   = occurences_chars[z+1];
                occurences_chars[z+1] = charswap;
              }
          }
        }
      }
    //End of sorting process
    //-------------------------
    //Start of printing process
    n = 27;
    for ( c = 1 ; c < n ; c++ )
    {
        printf("\n%c : ", occurences_chars[c]);
        printf("%d", occurences[c]);
    }
}
