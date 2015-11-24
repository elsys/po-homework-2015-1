#include <stdio.h>

void next_generation();

int main()
{
	int n, length;
	int in[20];
	int out[20];

	scanf("%d", &length);
	if(length>20 || length<0)
	{
		return 0;
	}

	for(n=0; n<length; n++)
	{
		scanf("%d", &in[n]);

	}

	next_generation(in, out, length);
	return 0;
}


void next_generation(int *current, int *next, int length)
{
	int count, ZeroCount , Rot;

	for(Rot=0; Rot<1000; Rot++){
        ZeroCount = 0;
		for(count =0; count<length; count++)
		{
			if(current[count] == 0)
			{
				printf(".");
				ZeroCount++;
			}
			else
			{
				printf("*");
			}
		}
        printf("\n");

		for(count = 0; count<length; count++)
		{

			if(current[count+2] == current[count])
			{
				next[count+1] = 0;
			}
			else
			{
				next[count+1] = 1;
			}

		}

        if(ZeroCount == length)
			break;

        for(count=0; count<length; count++)
		{
			current[count] = next[count];
		}

		current[0]=0;
		current[length-1] = 0;

	}
}