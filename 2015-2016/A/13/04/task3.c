#include <stdio.h>
#include <stdlib.h>

struct countletters
{
    char let;
    int num;
};
void create_letter_distribution_diagram (char sent, struct countletters *letter);
void sorting_func(struct countletters count[]);

int main()
{


    struct countletters letters[200];
    char c;
    int i;



    for(i = 'a'; i <= 'z'; i++)
    {
        letters[i].let = i;
        letters[i].num = 0;
    }

    while((scanf("%c", &c) != EOF))
    {
        if(c >= 65 && c <= 90)
        {
            c+=32;
        }
        int index = c;
        letters[index].let = c;
        if(c >= 97 && c <= 122)
        {
            create_letter_distribution_diagram(c, &letters[index]);
        }



    }

    sorting_func(letters);

    for(i = 97; i<122; i++)
    {
         printf("\n%c: %d", letters[i].let, letters[i].num);
    }

    return 0;
}

void create_letter_distribution_diagram (char sent, struct countletters *letter)
{

   if(sent >= 'a' && sent <= 'z')
   {
        letter->num++;
   }
}

void sorting_func(struct countletters count[])
{
    int p, q;
    struct countletters temp;
    for(p = 0; p < 26; p++)
     {
         for(q=97; q < 122-p; q++)
         {
             if(count[q].num < count[q+1].num)
              {
               temp= count[q];
               count[q]= count[q+1];
               count[q+1] = temp ;

              }
          }
      }
}

