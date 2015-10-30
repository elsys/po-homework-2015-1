#include <stdio.h>

int number(char);
int main()	
{
	int i,k;
	char teste[14],teste1;
	scanf("%s",teste);
	for(i=1;i<13;i++)
	{
		for(k=0;k<13-i;k++)
		{
			if(number(teste[k])>number(teste[k+1]))
			{
				teste1 = teste[k];
				teste[k] = teste[k+1];
				teste[k+1] = teste1;
			}
		}
	}
	printf("\n%s",teste);
	printf("\n");
	return 0;
}

int number(char order)
{
	switch(order)
	{
		case 'A': return 13;
		case 'K': return 12;
		case 'Q': return 11;
		case 'J': return 10;
		case 'T': return 9;
		case '9': return 8;
		case '8': return 7;
		case '7': return 6;
		case '6': return 5;
		case '5': return 4;
		case '4': return 3;
		case '3': return 2;
		case '2': return 1;
		default: return 1;
	}
}
