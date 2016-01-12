#include <stdio.h>

int find_rudolf(int, int*);

int main()
{
	int i, num, deers[200];

	scanf("%d", &num);
	for(i = 0; i < num; i++)
	{
		scanf("%d", &deers[i]);
	}

	printf("%d", find_rudolf(num, deers));

	return 0;
}

int find_rudolf(int num, int *deers)
{
	int c, d, swap;
	 
	  for (c = 0 ; c < (num - 1); c++)
	  {
	    for (d = 0 ; d < num - c - 1; d++)
	    {
	      if (deers[d] > deers[d+1])
	      {
		swap       = deers[d];
		deers[d]   = deers[d+1];
		deers[d+1] = swap;
	      }
	    }
	  }


	for( c = 0; c < num; c++)
	{
		if(deers[c] == deers[c+1])
			c++;
		else return deers[c];
	}
	return 0;
}
