
#include <stdio.h> 
#include <string.h>

int main(){
	char c[1000];
	scanf("%s", c);
	int i=0;
	int z;
	int j;
		j=strlen(c);
		while(i < j){
		if(c[i] == 'S')
		{
			if(c[i+1] == 'T')
			{
				if(c[i+2] == 'O')
				{
					if(c[i+3] == 'P')
					{
					break;
					}
				}
			}
		}

		i++;
	}
	z = 0;
	while (z < j){
		if (c[z] < 'Z')
			printf("%c", c[z]);
		else
			printf("%c", c[z] - 32);
		z++;
	}
	return 0;
}
