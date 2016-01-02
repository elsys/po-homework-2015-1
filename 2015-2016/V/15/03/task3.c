#include <stdio.h>

int main() {

	char c[14];
	int i = 0, j;
	for(;i <= 13; i++) {
		printf("Please enter card No:%d ->", i+1);
		c[i] = getchar();
		while(getchar() != 10);
		printf("\n");
		switch(c[i])
		{
			case 'A': c[i] = 64; break;
			case 'K': c[i] = 63; break;
			case 'Q': c[i] = 62; break;
			case 'J': c[i] = 61; break;
			case 'T': c[i] = 60; break;
			default: {
				if(!(c[i] >= 50 && c[i] <= 57))
					i--;
				break;
			}
		}		

	}

	for(i = 0; i <= 13; i++)
		for(j = 0; j <= 13; j++)
			if(c[i] < c[j]) {
				c[i] ^= c[j];
				c[j] ^= c[i];
				c[i] ^= c[j];

			}
	

	for(i = 0; i <= 13; i++)
	{
		switch(c[i])
		{
			case 64: c[i] = 'A'; break;
			case 63: c[i] = 'K'; break;
			case 62: c[i] = 'Q'; break;
			case 61: c[i] = 'J'; break;
			case 60: c[i] = 'T'; break;
			
		}
		printf("%c ", c[i]);
	}
	
	return 0;
}
