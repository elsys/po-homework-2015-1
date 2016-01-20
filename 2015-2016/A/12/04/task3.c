#include <stdio.h>
#include <string.h>

void create_letter_distribution_diagram();

struct sort_struct
{
	char ch;
	int oc;
}sort[26];

int main()
{
	create_letter_distribution_diagram();
	return 0;
}

void create_letter_distribution_diagram()
{
	int i, d, swap;
	char letter, count[26]={0}, order[26];
	letter='a';
	for(i=0; i<26; i++, letter++)
    {
		order[i]=letter;
    }
	for(i=0; (letter=getchar())!=EOF; i++)
	{
		for(i=0; i<26; i++)
		{
			if(letter==order[i] || letter==(order[i]+('A'-'a')))
				count[i]++;
		}
	}
	for(i=0; i<26; i++)
	{
		sort[i].oc = count[i];
		sort[i].ch = i+'a';
	}
    for(i=0; i<26; i++)
    {
        for(d=0;d<25-i;d++)
        {
            if(sort[d].oc < sort[d+1].oc)
            {
                swap         = sort[d].oc;
                sort[d].oc   = sort[d+1].oc;
                sort[d+1].oc = swap;

                swap         = sort[d].ch;
                sort[d].ch   = sort[d+1].ch;
                sort[d+1].ch = swap;

                if(sort[d].oc == sort[d+1].oc)
                {
			      if(sort[d].ch > sort[d+1].ch)
			      {
                    swap         = sort[d].ch;
                    sort[d].ch   = sort[d+1].ch;
                    sort[d+1].ch = swap;
			      }
                }
            }
        }
    }
	printf("\n");
	for(i=0; i<26; i++)
	{
		printf("%c: %d\n", sort[i].ch, sort[i].oc);
	}
}
