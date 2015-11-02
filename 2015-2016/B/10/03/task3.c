#include <stdio.h>
#include <string.h>

int main () {

	char Teste[20];

	int i,j,swap,l,Integer[20];

	scanf("%s",Teste);

	l = strlen(Teste);

	for(i = 0;i < l;i++)
		{
			if(Teste[i] >= '2' && Teste[i] <= '9') Integer[i] = Teste[i] - '0';

			if(Teste[i] == 'T') Integer[i] = 10;
			if(Teste[i] == 'J') Integer[i] = 12;
			if(Teste[i] == 'Q') Integer[i] = 14;
			if(Teste[i] == 'K') Integer[i] = 16;
			if(Teste[i] == 'A') Integer[i] = 18;					
		}
	
	for(i=0;i<l;i++)
		{
			for(j=i+1;j<l;j++)
				{
					if(Integer[i] > Integer[j])
						{
							swap = Integer[i];
							Integer[i] = Integer[j];
							Integer[j] = swap;
						}
				}
		}
	for(i=0;i<l;i++)
		{
			if(Integer[i] == 2) Teste[i] = '2';
			if(Integer[i] == 3) Teste[i] = '3';
			if(Integer[i] == 4) Teste[i] = '4';
			if(Integer[i] == 5) Teste[i] = '5';
			if(Integer[i] == 6) Teste[i] = '6';
			if(Integer[i] == 7) Teste[i] = '7';
			if(Integer[i] == 8) Teste[i] = '8';
			if(Integer[i] == 9) Teste[i] = '9';		
		
			if(Integer[i] == 10) Teste[i] = 'T';
			if(Integer[i] == 12) Teste[i] = 'J';
			if(Integer[i] == 14) Teste[i] = 'Q';
			if(Integer[i] == 16) Teste[i] = 'K';
			if(Integer[i] == 18) Teste[i] = 'A';
			}		
	printf("\n%s\n",Teste);
	return 0;
}
