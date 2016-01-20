#include <stdio.h>

int main()
{	
	int how_many = 0;
	int deer[200];
	int counter = 0;	
	int rudolf[200];
	int support = 0,help = 0;;

	scanf("%d\n", &how_many);

	for(counter = 0; counter < how_many; counter++)
	{
		scanf("%d", &deer[counter]); 
	}
	

	for(counter = 0; counter < how_many; counter++)
	{
		rudolf[counter] = -1;
	}
	counter = 0;
	for(; counter < how_many; counter++)
	{
		support = 1;

		for(help = counter + 1; help < how_many; help++)
		{
			if(deer[counter] == deer[help])
			{
				support++;
				rudolf[help] = 0;
			}
	
			if(rudolf[counter] != 0)
			{
				rudolf[counter] = support; 
			} 
		}
		
		
	}
	
	for(counter = 0; counter < how_many; counter++)
	{
		if(rudolf[counter] == -1)
		{
			printf("%d\n", deer[counter]);
		}
	}

	return 0;
}
