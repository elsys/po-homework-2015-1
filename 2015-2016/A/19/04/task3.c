#include <stdio.h>
#include <string.h>

void create_letter_distribution_diagram();

int main()
{
	create_letter_distribution_diagram();	

	return 0;
}

void create_letter_distribution_diagram()
{
	int i, d, swap, letter, count[26], sort[26][300];
	char alphabet[26];

	letter='a';
	for(i=0; i<26; i++, letter++)
		alphabet[i]=letter;
	for(i=0; i<26; i++)
		count[i]=0;


	for(i=0; (letter=getchar())!=EOF; i++)
	{
		for(i=0; i<26; i++)
		{
			if(letter==alphabet[i] || letter==(alphabet[i]+('A'-'a')))
				count[i]++;
		}
	}

	for (i=0; i<26; i++)
	{
		sort[i][1]=count[i];
		sort[i][0]=i;
	}

	for(i=0; i<26; i++)
	  {
		    for(d=0;d<25-i;d++)
		    {
		      if(sort[d][1]<sort[d+1][1])
		      {
			swap=sort[d][1];
			sort[d][1]=sort[d+1][1];
			sort[d+1][1]=swap;

			swap=sort[d][0];
			sort[d][0]=sort[d+1][0];
			sort[d+1][0]=swap;

			if(sort[d][1]==sort[d+1][1])
			{
			      if(sort[d][0]>sort[d+1][0])
			      {
				swap=sort[d][0];
				sort[d][0]=sort[d+1][0];
				sort[d+1][0]=swap;
			      }
			}
		      }
		    }
	  }

	printf("\n");
	for(i=0; i<26; i++)
	{
		printf("%c: %3d\n", sort[i][0]+'a', sort[i][1]);
	}
}
