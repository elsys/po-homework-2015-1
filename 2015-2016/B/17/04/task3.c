#include <stdio.h>
#include <string.h>

int create_letter_distribution_diagram( char* string );
int main()
{
   char string [100];
   scanf ( "%[^\n]s", string );
   create_letter_distribution_diagram( string );

    return 0;
}

int create_letter_distribution_diagram ( char* string )
{
    int counter,num[26],length,position,max,help;
    char letters[26],helpchar;

    for(counter=0;counter<26;counter++)
            num[counter] = 0;

    for(counter=0; counter < 26 ;counter++)
            letters[counter] = counter + 'a';

       length=strlen(string);
    for(counter=0;counter<length;counter++)
        {
            if(string[counter]>='a' && string[counter]<='z') num[string[counter]-'a']++;
            if(string[counter]>='A' && string[counter]<='Z') num[string[counter]-'A']++;
        }

        for(position = 0; position <26; position++)
        {
            max = position;

            for(counter = position + 1; counter < 26; counter++)
            {
                if(num[counter] > num[max])
                    max = counter;

            }


                    help = num[position];
                    num[position] = num[max];
                    num[max] = help;
                    helpchar = letters[position];
                    letters[position] = letters[max];
                    letters[max] = helpchar;
        }
        for(counter=0;counter<26;counter++)
        {
            for(position=0;position<26;position++)
            {
                if(position<26)
                {
                    if(num[position] == num[position + 1 ])
                    {
                        if(letters[position]>letters[position + 1 ])
                        {
                            help=num[position];
                            num[position]=num[position+1];
                            num[position+1]=help;
                            helpchar=letters[position];
                            letters[position]=letters[position+1];
                            letters[position+1]=helpchar;
                        }
                    }
                }
            }
        }

         for(position=0;position<26;position++)
            printf("%c-->%d\n",letters[position],num[position]);

    return 0;
}



