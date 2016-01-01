#include <stdio.h>
#include <string.h>
#define MAX 200

int main()
{
	int count, s;
	char sent[MAX];

	fgets(sent, MAX, stdin);


	for(count=0; count<MAX; ++count)
	{
		if(sent[count] == 'S' 
		&& sent[count+1] == 'T' 
		&& sent[count+2] == 'O' 
		&& sent[count+3] == 'P')
		{
		s = count;
			break;
		}

		if(sent[count] >= 'a' && sent[count] <= 'z')
		{
			sent[count] = sent[count] -32;
		}
	}

	for(;s<MAX; ++s)
	{
		sent[s] = ' ';
	}

	printf("%s \n", sent);

	return 0;
}
