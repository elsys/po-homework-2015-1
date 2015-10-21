#include <stdio.h>
#include <string.h>

int main() 
{
	char cards[14];
	int i, l, k = 0, j, temp;

	scanf("%s", cards);
	l = strlen(cards);
	for(i = 0; i < 14; i++)
	{
		if(cards[i] == '1' && cards[i+1] != '0'){k = 1; break;}
		if(cards[i] == '0' && cards[i-1] != '1'){k = 1; break;}
		
		for(j = 0; j < 14; i++)
		{
			if(j == i) j++;
			if(cards[j] == cards[i]){k = 1; break;}
		}

	}

	if(l < 14 || l > 14){k = 1;}


	if(!k)
	{
		for(j = 1; j < 14; j++)
			for(i = 0; i < 14; i++)
			{
				if(cards[i] == 'A')
				{
					temp = cards[0];
					cards[0] = cards[i];
					cards[i] = temp;
				}
				if(cards[i] == '2')
				{
					temp = cards[1];
					cards[1] = cards[i];
					cards[i] = temp;
				}
				if(cards[i] == '3')
				{
					temp = cards[2];
					cards[2] = cards[i];
					cards[i] = temp;
				}
				if(cards[i] == '4')
				{
					temp = cards[3];
					cards[3] = cards[i];
					cards[i] = temp;
				}
				if(cards[i] == '5')
				{
					temp = cards[4];
					cards[4] = cards[i];
					cards[i] = temp;
				}
				if(cards[i] == '6')
				{
					temp = cards[5];
					cards[5] = cards[i];
					cards[i] = temp;
				}
				if(cards[i] == '7')
				{
					temp = cards[6];
					cards[6] = cards[i];
					cards[i] = temp;
				}
				if(cards[i] == '8')
				{
					temp = cards[7];
					cards[7] = cards[i];
					cards[i] = temp;
				}
				if(cards[i] == '9')
				{
					temp = cards[8];
					cards[8] = cards[i];
					cards[i] = temp;
				}
				if(cards[i] == '1')
				{
					temp = cards[9];
					cards[9] = cards[i];
					cards[i] = temp;
				}
				if(cards[i] == '0')
				{
					temp = cards[10];
					cards[10] = cards[i];
					cards[i] = temp;
				}
				if(cards[i] == 'J')
				{
					temp = cards[11];
					cards[11] = cards[i];
					cards[i] = temp;
				}
				if(cards[i] == 'Q')
				{
					temp = cards[12];
					cards[12] = cards[i];
					cards[i] = temp;
				}
				if(cards[i] == 'K')
				{
					temp = cards[13];
					cards[13] = cards[i];
					cards[i] = temp;
				}
			}

		printf("%s \n\n", cards);
	}

	else if(k)
	{
		printf("Invalid deck! \n\n");
	}
		return 0;
}